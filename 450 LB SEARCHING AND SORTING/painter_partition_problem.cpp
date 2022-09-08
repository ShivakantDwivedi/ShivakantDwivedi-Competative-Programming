//ye problem poori same hai book allocation ki tarah

#include <iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid)
{
    int painter=1;
    int room=0;
    for(int i=0;i<n;i++)
    {
        if(room+arr[i]<=mid)
        {
            room=room+arr[i];
        }
        else
        {
            painter++;
            if(painter>m || arr[i]>mid)
            {
                return false;
            }
        }
        room=arr[i];
    }
    return true;
}

int painter_partition(int arr[],int n, int m)
{
    
    int start=0;
    int sum=0;
    int ans =-1;
    for  (int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(ispossible(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}



int main(){
    int number[100];
    int size;
    cout<<"Enter  the size of an array"<<endl;
    cin>>size;
    int painter;
    cout<<"Enter the number of painter"<<endl;
    cin>>painter;
    cout<<"Enter the element in an array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>number[i];
    }
   int ans = painter_partition(number,size,painter);
   cout<<ans;
    return ans;
}