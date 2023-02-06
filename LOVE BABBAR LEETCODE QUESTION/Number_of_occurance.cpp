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
// Formula  of finding nummber  of  occurance is = (last occ. ka index - first occ. ka index)+1

int main(){
    int number[9]={1,2,2,3,3,3,4,5,5};
   int ans1=firstOcc(number,9,3);
    int ans2=lastOcc(number,9,3);
    int ans3=(ans2-ans1)+1;
    cout<<ans3<<endl;
    return 0;
}