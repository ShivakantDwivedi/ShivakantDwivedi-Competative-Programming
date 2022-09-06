/*
Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.
 

Example 1:

Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
Example 2:
Input:
arr1[] = {100, 112, 256, 349, 770}
arr2[] = {72, 86, 113, 119, 265, 445, 892}
k = 7
Output:
256
Explanation:
Final sorted array is - 72, 86, 100, 112,
113, 119, 256, 265, 349, 445, 770, 892
7th element of this array is 256.
*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



long long int  find_sorted_array(int arr[],int n,int brr[],int m,int k)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        ans.push_back(arr[i]);
    }
    for(int i=0;i<m;i++)
    {
        ans.push_back(brr[i]);
    }
    sort(ans.begin(),ans.end());

   return ans[k-1];

}


int main(){
    int arr[100];
    long long  int size1;
    cout<<"Enter the size of an element"<<endl;
    cin>>size1;
    cout<<"Enter the sorted element in an array"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>arr[i];
    }
    int brr[100];
   long long int size2;
    cout<<"Enter the size 2 of an element"<<endl;
    cin>>size2;
    cout<<"Enter the sorted element in an array 2"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>brr[i];
    }
    cout<<"Enter the key of an element"<<endl;
   long long int k;
    cin>>k;
   int ans1=find_sorted_array(arr,size1,brr,size2,k);
   cout<<ans1<<" ";
    return 0;
}