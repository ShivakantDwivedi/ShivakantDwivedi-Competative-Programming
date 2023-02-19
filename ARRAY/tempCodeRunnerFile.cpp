#include <iostream>
using namespace std;
int firstocc(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans= mid;
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
int lastocc(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans= mid;
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
int main()
{
   int a[10]={1,2,3,4,4,6,3,8,3,10};
   int k;
   cin>>k;
   int startindex=firstocc(a,10,k);
   
   int lastindex=lastocc(a,10,k);
  cout<<startindex<<endl;
  cout<<lastindex<<endl;

    return 0;
}