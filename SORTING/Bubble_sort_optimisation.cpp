#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        bool swapped = false; // esme bs ye ki  round me check kare ga
        for (int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
            swap(arr[j],arr[j+1]);
            swapped =true;
            }
        }
        if(swapped==false)
        break;
    }
}


void print(int brr[],int n)
{
    cout<<"Sorted array element "<<endl;
    for  (int i=0;i<n;i++)
    {
        cout<<brr[i]<<" ";
    }
}





int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    bubble_sort(number,size);
    print(number,size);
    return 0;
}