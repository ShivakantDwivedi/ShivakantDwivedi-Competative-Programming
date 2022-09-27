#include <iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linear_search(int *arr,int n,int key)
{
    print(arr,n); // print kara ke dekh lena hai kaise  chal rha hai
    // base condition
    if(n==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else
    {
        return linear_search(arr+1,n-1,key);
    }
}


int main(){
    cout<<"Enter the size of  an array"<<endl;
    int n;
    cin>>n;
    int *arr= new int [n];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key element "<<endl;
    int key;
    cin>>key;
    int ans=linear_search(arr,n,key);
    if(ans)
    {
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element is  not found"<<endl;
    }

    return 0;

}