/*

Sample Input 1:
1
2 2
1 1
1 1
Sample Output 1:
0
Explanation Of The Sample Input 1:
For the given grid, both rows have an equal number of ones. Since the row with index 0 has a smaller index. Hence the answer is 0.
Sample Input 2:
2
3 4
0 0 1 1
0 0 1 0
0 1 1 1
2 3
0 1 1
0 1 1    
Sample Output 2:
2
0

*/

#include <iostream>
using namespace std;

int rowMaxOnes(int *mat, int n, int m) {
    int ans=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
         int count=0;
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1)
            {
                count++;
            }
        }
            if(ans<count)
            {
                ans=count;
                res=i;
            }
    }
    return res;
}




int main(){
    cout<<"Enter the row"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the coloumn"<<endl;
    int m;
    cin>>m;
    int arr [100][100];
    cout<<"Enter the value in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans=rowMaxOnes(arr,n,m);
    cout<<"Imdex of row is "<<ans;

    cout<<"Print the value of the 2D array"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   
    return 0;



}



















