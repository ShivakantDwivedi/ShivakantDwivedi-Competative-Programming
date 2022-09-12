#include <iostream>
using namespace std;


int  largest_sum(int arr[][2],int n,int m)
{
    int max=INT_FAST32_MIN;
    int row=-1;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum += arr[i][j];
        }
        cout<<"Sum of  an row is"<<sum<<endl;
        if(sum>max)
        {
            max=sum;
           row=i;
        }
    }
    return row;
}




int main(){

    int arr[2][2];
    cout<<"Enter the value in an array"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Print the value of the 2D array"<<endl;
     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans=largest_sum(arr,2,2);
    cout<<"Imdex of row is "<<ans;
    return 0;



}