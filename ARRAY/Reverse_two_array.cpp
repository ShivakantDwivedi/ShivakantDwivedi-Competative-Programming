#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
        while(start<=end)
        {
        swap(arr[start],arr[end]);
        start++;
        end--;
        }
}



void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    int arr[5]={12,22,34,5,7};
    int brr[4]={33,37,11,67};
    reverse(arr,5);
    reverse(brr,4);
    print(arr,5);
    print(brr,4);
    return 0;
}