#include <iostream>
using namespace std;

void cyclic_rotate(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
   int number[100];
   int size;
   cout<<"Enter the size of an array"<<endl;
   cin>>size;
   cout<<"Enter the element in an array"<<endl;
   for(int i=0;i<size;i++)
   {
    cin>>number[i];
   }
   cyclic_rotate(number,size);
   print(number,size);
   return 0;
}