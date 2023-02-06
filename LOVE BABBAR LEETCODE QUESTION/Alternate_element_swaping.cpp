#include <iostream>
using namespace std;

void  alternate(int arr[],int n)
{
    
    for(int i=0;i<n;i=i+2)
    {
        if(i+1<n)
        {
           int temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
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
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    alternate(number,size);
    print(number,size);

    return 0;
}