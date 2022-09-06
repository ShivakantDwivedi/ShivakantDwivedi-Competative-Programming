/*
Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.

Example 1:

Input:
L = 6, N = 78
arr[] = {5, 20, 3, 2, 5, 80}
Output: 1
Explanation: (2, 80) have difference of 78.
Example 2:

Input:
L = 5, N = 45
arr[] = {90, 70, 20, 80, 50}
Output: -1
Explanation: There is no pair with difference of 45.
*/


#include <iostream>
#include <algorithm>
using namespace std;


bool  find_pair_of_difference(int arr[],int n,int key)
{
    sort(arr,arr+n);
  int i=0;
  int j=1;
  while(i<n && j<n)
  {
    if(arr[i] != arr[j]  && arr[j] - arr[i] == key)
    {
        return 1;
    }
    else if (arr[j] - arr[i] > key) // agr value badi ho jaa rhi hai i wale ko aage badha dena hai
    {
        i++;
    }
    else  // or agr value choti ho to j wale ko aage badha dena hai
    {
        j++;
    }
  }
  return 0;
}


 // input lijea L=5  , N=45 , arr={90,70,20,80,50} output 0 means false
 //  input lijea L=6  , N=78 , arr={5,20,3,2,5,80} output 1 means true


int main()
{
    int number[100];
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>number[i];
    }
    int key;
    cout<<"Enter the key element"<<endl;
    cin>>key;
    cout<<find_pair_of_difference(number,n,key);
    return 0;
}