#include <iostream>
using namespace std;

void  move_0_to_right(int arr[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
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
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    move_0_to_right(number,size);
    print(number,size);
    return 0;
}