#include <iostream>
using namespace std;

void reverse_by_k_position(int arr[],int n,int position)
{
    int start=position+1;
    int end =n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
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
    int position;
    cout<<"Enter the position of rotation"<<endl;
    cin>>position;
    reverse_by_k_position(number,size,position);
    print(number,size);
    return 0;
}

