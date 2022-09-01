#include <iostream>
using namespace std;

int first_position(int arr[],int n,int key)
{
    int start=0;
    int end  =n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int last_position(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    int ans1=first_position(number,size,key);
    int ans2=last_position(number,size,key);
    cout<<ans1<<" "<<ans2;
    return 0;
}