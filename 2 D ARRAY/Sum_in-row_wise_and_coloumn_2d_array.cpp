/*

input ->   1 2 3 4 
           5 6 7 8

sum of colo is  6 12 10 12
sum of row is   10  26
           

*/





#include <iostream>
using namespace std;

void row_sum(int arr[][2],int n,int m)  // row wise sum
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Row wise sum is"<<sum<<endl;
    }
}


void coloum_sum(int arr[][2],int n,int m)
{
    for(int m=0;m<2;m++)
    {
        int sum=0;
        for(int n=0;n<2;n++)
        {
            sum+=arr[n][m];
        }
         cout<<"Coloumn wise sum is"<<sum<<endl;
    }
}

int main(){

    int arr[2][2];
    cout<<"Enter the number in an array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the 2D array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     row_sum(arr,2,2);
     coloum_sum(arr,2,2);
    return 0;

}