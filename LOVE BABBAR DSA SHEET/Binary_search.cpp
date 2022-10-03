/*
Given a sorted array of size N and an integer K, find the position at which K is present in the array using binary search.

Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Example 2:

Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.
*/

#include <iostream>
using namespace std;

int binary_search(int *arr , int n, int k)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
        return mid;
        }

        else if (arr[mid]>k)
        {
            end=mid-1;
        }

        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the key"<<endl;
    cin>>k;
    cout<<binary_search(arr,n,k);
    return 0;
}