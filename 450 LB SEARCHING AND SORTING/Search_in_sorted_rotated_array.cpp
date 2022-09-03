#include <iostream>
using namespace std;


int pivote(int arr[],int n)
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

int binary_search(int arr[],int n, int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
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



int search_in_sorted_roated_array(int arr[],int n,int key)
{
    int ans=pivote(arr,n);
    if(key>=arr[ans] && key<=arr[n-1])
    return binary_search(arr,n,ans,n-1,key);
    else
    return binary_search(arr,n,0,ans-1,key);
}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size of  an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int key;
    cout<<"Enter the key in an array"<<endl;
    cin>>key;
    int ans1=search_in_sorted_roated_array(number,size,key);
    cout<<ans1<<endl;
    return 0;
}