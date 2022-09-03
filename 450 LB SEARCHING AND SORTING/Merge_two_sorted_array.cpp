#include <iostream>
using namespace std;

void merge_two_sorted_array(int arr[],int n,int brr[],int m,int crr[],int o)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            crr[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            crr[k] =  brr[j];
            j++;
            k++;
        }
    }

    while(i<n)
    {
        crr[k]=arr[i];
        i++;
        k++;
    }

    while(j<m)
    {
        crr[k]=brr[j];
        j++;
        k++;
    }
}

void print(int crr[],int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<crr[i]<<" ";
    }
}


int main(){
    int arr[100];
    int size1;
    cout<<"Enter the size of an 1 array"<<endl;
    cin>>size1;
    cout<<"Enter the element in an 1 array"<<endl;
    for(int i=0;i<size1;i++)
    {
        cin>>arr[i];
    }
    int brr[100];
    int size2;
    cout<<"Enter the size of an 2 array"<<endl;
    cin>>size2;
    cout<<"Enter the element in an 2 array"<<endl;
    for(int i=0;i<size2;i++)
    {
        cin>>brr[i];
    }
    int crr[100];
    int size3=(size1+size2);
    merge_two_sorted_array(arr,size1,brr,size2,crr,size3);
    print(crr,size3);
    return 0;
    
}