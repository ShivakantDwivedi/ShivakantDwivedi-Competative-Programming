/*

Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

*/

#include <iostream>
using namespace std;

bool search_element(int arr[][4],int n,int m,int target) // esme atleast coloum me input dena hota hai
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}


int main(){
    int n;
    cout<<"Enter the size of row"<<endl;
    cin>>n;
     int m=4;
    cout<<"Enter the size of coloumn"<<endl;
    cout<<m<<endl;
    int arr[n][4];  // esme atleast coloumn me input denaa padta hai
    // Take an input;
    cout<<"Take input from user "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    } 

    // print that input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // search for element is present or not

    cout<<"Enter the element which we search"<<endl;
    int target;
    cin>>target;

   int  ans=search_element(arr,n,4,target);
   
   if(ans==0)
   {
    cout<<"Element not  found";
   }

   else
   cout<<"Element is found";

}