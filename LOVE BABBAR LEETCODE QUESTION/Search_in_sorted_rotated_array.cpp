#include <iostream>
using namespace std;

int binary_search(int arr[],int s, int e,int key)
{    
     int start=s;
     int end=e;
    int mid=start+(end-start)/2; //  ye es liye because kabhi kabhi mid me value integer ki range se bahar cahli jaati hai
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int  pivote(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;

}



int findPosition(int arr[], int n, int k)
{
  int pivot=pivote(arr,n);
    if( k >= arr[pivot] && k <= arr[n-1])
        return binary_search(arr,pivot,n-1,k);
    else
        return  binary_search(arr,0,pivot-1,k);
  
}




int main()
{
int number[4]={2,3,5,8};
int key=3;
cout<<findPosition(number,4,3)<<endl;
return 0;
}