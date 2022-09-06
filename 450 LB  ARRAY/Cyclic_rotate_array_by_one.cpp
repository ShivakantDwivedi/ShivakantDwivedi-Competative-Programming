/* Cyclically rotate an array by one
BasicAccuracy: 64.05%Submissions: 100k+Points: 1
Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
 

Example 2:

Input:
N = 8
A[] = {9, 8, 7, 6, 4, 2, 1, 3}
Output:
3 9 8 7 6 4 2 1
*/





#include <iostream>
using namespace std;

void cyclic_rotate(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int number[100];
   int size;
   cout<<"Enter the size of an array"<<endl;
   cin>>size;
   cout<<"Enter the element in an array"<<endl;
   for(int i=0;i<size;i++)
   {
    cin>>number[i];
   }
   cyclic_rotate(number,size);
   print(number,size);
   return 0;
}