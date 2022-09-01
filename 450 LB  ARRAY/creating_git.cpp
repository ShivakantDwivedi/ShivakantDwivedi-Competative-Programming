#include <iostream>
using namespace std;

void  Move_0_to_left(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        if(arr[start]<0)
        {
        start++;
        }
        else
        {
            swap(arr[end],arr[start]);
            start++;
            end--;
        }
    }
}

 void print(int arr[],int n)
   {
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   }
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the elememt in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    Move_0_to_left(number,size);
    print(number,size);
    return 0;
}