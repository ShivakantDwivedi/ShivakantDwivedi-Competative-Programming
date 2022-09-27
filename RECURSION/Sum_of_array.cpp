/* input 1 2 4  output 7
input  2 3 5 9 output 19
*/

#include <iostream>
using namespace  std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}


int sum(int *arr,int n)
{ 
    print(arr,n) ; 
    if(n==0) // base case
    return 0;


    if(n==1) // base case
    return arr[0];

    else
    {
        int remaining=arr[0];
        int ans=remaining+ sum(arr+1,n-1);
        return ans;
    }
}


int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int *arr=new int  [n];
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sum(arr,n)<<endl;
    return  0;
}