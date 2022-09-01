#include <iostream>
using namespace std;

void sort_0_1(int arr[],int n)
    {
       int start=0;
       int  end=n-1;
       while(start<=end)
       {
           if(arr[start]==0)
           {
               start++;
           }
           else if(arr[end]==1)
           {
               end--;
           }
           else
           {
               swap(arr[start],arr[end]);
               start++;
               end--;
           }
       }
    }

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    
    sort_0_1(number,size);
    print(number,size);
    return 0;
    
}