/*
Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell.

Example 1:

Input:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
Output:
DDRDRR DRDDRR
Explanation:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.
Example 2:
Input:
N = 2
m[][] = {{1, 0},
         {1, 0}}
Output:
-1
Explanation:
No path exists and destination cell is 
blocked.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y ,int n, vector<vector<int>> visited, vector<vector<int>>&m)
{
    if( (x>=0 && x<n-1) && (y>=0 && y<n-1) && (visited[x][y]==0 && m[x][y]==1))
    {
        return true;
    }
    return false;
}


void solve(vector<vector<int >>&m, vector<string>&ans , int n, int x, int y,  vector<vector<int>> visited, string path)
{
    // base condition 
    if(x==n-1 && y==n-1) // eskka matlabh ham last position pe pahucch gye hai
    {
        ans.push_back(path);
        return ;
    }

    else
    { 
        // matlabh es samay x==0 and  y==0 hai
        visited[x][y]=1;
        
        // having 4 choise D L R U

        // moving D
        int newx=x+1;
        int newy=y;
        if(isSafe(newx , newy, n , visited, m))
        {
             path.push_back('D');
            solve(m,ans,n,newx,newy,visited,path);
            path.pop_back();
        }

          //  move l
          newx=x;
         newy=y-1;
        if(isSafe(newx , newy, n , visited, m))
        {
            path.push_back('L');
            solve(m,ans,n,newx,newy,visited,path);
            path.pop_back();
        }
        
        
        // move R
         newx=x;
         newy=y+1;
        if(isSafe(newx , newy, n , visited, m))
        {
            path.push_back('R');
            solve(m,ans,n,newx,newy,visited,path);
            path.pop_back();
        }
        
        // move U
          newx=x-1;
         newy=y;
        if(isSafe(newx , newy, n , visited, m))
        {
            path.push_back('U');
            solve(m,ans,n,newx,newy,visited,path);
            path.pop_back();
        }

        visited[x][y]=0;
    }
}

vector<string>find_path(vector<vector<int >>&m, int n)
{
    vector<string>ans;

    if(m[0][0]!=0)
    {
        return ans; // agr m[0][0] ho to aage hm nhi badh paaye ge
     }
    int srcx=0;
    int srcy=0;

    string path="";
    vector<vector<int>> visited=m;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    solve(m,ans,n,srcx,srcy,visited,path);

}







int main(){

    cout<<"Enter the number of matrix"<<endl;
    int n;
    cin>>n;
   vector<vector<int>>m (n, vector<int> (n,0));

   cout<<"Enter the element "<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>m[i][j];
        }
    }
    vector<string>result= find_path(m,n);
    sort(result.begin(),result.end());

    if(result.size()==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=0;i<result.size();i++)
        {
            cout<<result[i];
        }
    }
    return 0;

}





















