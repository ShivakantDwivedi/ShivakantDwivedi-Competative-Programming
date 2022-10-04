#include <iostream>
using namespace std;


int find(int *arr,int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start++],arr[end--]);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    find(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<brr[i];
    }
}