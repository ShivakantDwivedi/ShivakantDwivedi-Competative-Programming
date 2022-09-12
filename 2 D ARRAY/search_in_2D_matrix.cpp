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


int  search_2D_array(int arr[][2],int n,int m,int target)
{
    int start=0;
    int end=(n*m)-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int element =arr[mid / m][ mid % m];

        if(element == target)
        {
           return 1;
        }
         else if(element < target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return 0;
}

int main(){
    int arr[2][2];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the element"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  
    }
    int  target;
    cout<<"Enter the target"<<endl;
    cin>>target;
   int ans=search_2D_array(arr,2,2,target);
   if(ans==1)
   {
    cout<<"Element is present"<<endl;
   }
   else
   {
    cout<<"Element is not present"<<endl;
   }
    return 0;


}