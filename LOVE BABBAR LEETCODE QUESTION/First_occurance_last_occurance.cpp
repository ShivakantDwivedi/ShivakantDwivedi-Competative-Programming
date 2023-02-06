#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int number[9]={1,2,2,3,3,3,4,5,5};
    firstOcc(number,9,3);
    lastOcc(number,9,3);
    cout<<"The index of first occurance is "<< " "<<  firstOcc(number,9,3)<<endl;
    cout<<"The index of last occurance is "<<" "<< lastOcc(number,9,3)<<endl;
    return 0;
}