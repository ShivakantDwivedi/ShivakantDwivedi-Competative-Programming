#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
    }
}


   void print(int arr[],int n)
   {
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
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
   bubble_sort(number,size);
    print(number,size);
    return 0;
}