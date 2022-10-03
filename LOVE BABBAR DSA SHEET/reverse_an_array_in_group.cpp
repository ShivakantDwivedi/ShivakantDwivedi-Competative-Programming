/*

Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.

Note: If at any instance, there are no more subarrays of size greater than or equal to K, then reverse the last subarray (irrespective of its size).

Example 1:

Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.
 

Example 2:

Input:
N = 4, K = 3
arr[] = {5,6,8,9}
Output: 8 6 5 9
 

 */



#include <iostream>
#include <array>
#include <algorithm>
using namespace std;



void reverse(int *arr, int n , int m)
{
    int start=n;
    int end=m-1;
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
}

void reverse_array(int *arr,int start, int end, int k , int n)
{
    reverse(arr,start,k);
    reverse(arr,k,n);

}



int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position"<<endl;
    int k;
    cin>>k;
    reverse_array( arr, 0, n-1 ,k , n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}




/*

#include <iostream>
using namespace std;


void print(int *arr , int n)
{
   for(int i=0;i<n;i++)
   {
    cout<<arr[i];
   }
}

void reverse(int *arr , int n,int k)
{
    int start=0;
    int end=n-1;
    int temp[1000];
    int m=0;
    for(int i=k-1;i>=0;i--)
    {
        temp[m]=arr[i];
        m++;
    }

    for(int i=n-1;i>=k;i--)
    {
        temp[m]=arr[i];
        m++;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }

}






int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position "<<endl;
    int k;
    cin>>k;
    reverse(arr,n,k);
    print(arr,n);
    return 0;
}
*/