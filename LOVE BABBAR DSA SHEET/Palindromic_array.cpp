/*
Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

 

Example:
Input:
2
5
111 222 333 444 555
3
121 131 20

Output:
1
0

Explanation:
For First test case.
n=5;
A[0] = 111    //which is a palindrome number.
A[1] = 222   //which is a palindrome number.
A[2] = 333   //which is a palindrome number.
A[3] = 444  //which is a palindrome number.
A[4] = 555  //which is a palindrome number.
As all numbers are palindrome so This will return 1.

*/

#include <iostream>
using namespace std;

int palindrome_array(int *arr , int n)
{
    int ans=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        int res=0;
        int ans=0;
        int p=arr[i];
        while(p!=0)
        {
            int ans=p%10;
            int res=res*10+ans; // ye es liye kiya gya jo array ki digit o index pe hai usi ki yaha pe 
            // bana gya ye expression likh ke .
            p=p/10;
        }
        if(arr[i]!=res)
        return 0;
    }
    return 1;
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
    cout<<palindrome_array(arr,n);
    return 0;
}




