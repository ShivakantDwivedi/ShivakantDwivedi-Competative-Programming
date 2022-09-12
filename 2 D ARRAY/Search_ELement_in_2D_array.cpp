// Search Element in 2 D array that element is found or not.
/*

input->    1 2 3  search for 1
           4 5 6

output->  1 is  found
            10  is not found








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