#include <iostream>
using namespace std;

int find_pivote(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[0]<=arr[mid])
        {

            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}




int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an element "<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<find_pivote(number,size);
    return 0;
}