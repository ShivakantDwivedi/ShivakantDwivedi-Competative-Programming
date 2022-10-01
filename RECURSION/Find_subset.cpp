/*
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
*/

#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>arr,int n, vector<int> &ans,int index, vector<int>output)
{
    if(index>=n)
    {
        ans.push_back(output);
        return ;
    }
    else
    {
        // exclude 
        solve(arr,n,ans,index+1,output);

        //include 
        int element = arr[index];
        output.push_back(element);
        solve(arr,n,ans,index+1,output);
    }

}

vector<int> subset(vector<int>arr,int n)
{
    vector<int>output;
    vector<int>ans;
    int index;
    solve(arr,n,ans,index,output);
    return ans;
}



int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in array"<<endl;
    vector<int >arr;
    int m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        arr.push_back(m);
    }
    subset(arr,n);
    
    }