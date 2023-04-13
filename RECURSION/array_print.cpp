#include <iostream>
using namespace std;


void solve(int *arr,int size,int index)
{
    if(index==size)
    {
        return ;
    }
    cout<<arr[index]<<" ";
    solve(arr,size,index+1);
}

int main(){
    int arr[]={4,5,6,7,7};
    int size=5;
    solve(arr,size,0);
}