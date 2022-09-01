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
    return -1;
}



int main(){
    int number[8]={3,4,7,8,9,12,15,19};
    int ans=binary_search(number,8,15);
    cout<<ans;
    return 0 ;
}