#include <iostream>
using namespace std;


void print(int arr[],int start,int end )
{
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl<<endl;
}


bool binary_search(int *arr,int n,int start,int end,int key)
{

    print(arr,start,end);
    if(start>end)
    {
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]>key)
    {
       return  binary_search(arr,n,start,mid-1,key);
    }
    else
    {
       return  binary_search(arr,n,mid+1,end,key);

    }
}



int  main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the  key "<<endl;
    int key;
    cin>>key;
    int ans=binary_search(arr,n,0,n-1,key);
    if(ans)
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}