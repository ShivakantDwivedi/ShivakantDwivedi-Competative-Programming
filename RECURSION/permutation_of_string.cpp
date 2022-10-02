#include <iostream>
#include <vector>
using namespace std;


void solve(vector<int>n , vector<vector<int>>&ans, int index )
{
    // base condition
    if(index>=n.size())
    {
        ans.push_back(n);
        return;
    }
    else
    {
        for(int i=index;i<n.size();i++)
        {
            swap(n[index],n[i]);
            solve(n,ans,index+1);
            // backtracking
            swap(n[index],n[i]);
        }
    }
}
vector<vector<int>>permutation(vector<int>&n)
{
    vector<vector<int>>ans;
    int index=0;
    solve(n,ans,index);
    return ans;
}


int main(){
    cout<<"Enter the number"<<endl;
    vector<int>n;
    int m;
    for(int i=0;i<n.size();i++)
    {
        cin>>m;
        n.push_back(m);
    }
    permutation(n);
    return 0;
}