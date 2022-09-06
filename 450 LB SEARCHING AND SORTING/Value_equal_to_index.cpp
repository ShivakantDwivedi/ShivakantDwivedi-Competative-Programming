/*
Given a sorted array arr containing n elements with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  2 5
Explanation: First occurrence of 5 is at index 2 and last
             occurrence of 5 is at index 5. 
 

Example 2:

Input:
n=9, x=7
arr[] = { 1, 3, 5, 5, 5, 5, 7, 123, 125 }
Output:  6 6 
*/




#include <iostream>
using namespace std;

int value_of_index(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i+1)
        {
            return arr[i];
        }
    }
}
int main(){
    int number[100];
    int  size;                  
    cout<<"Enter  the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<"Answer  the index is"<<value_of_index(number,size);
    return 0;
}