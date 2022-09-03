#include <iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
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
    cout<<binary_search(number,size,key);
    return 0;
    
}