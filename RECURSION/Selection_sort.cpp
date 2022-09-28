#include <iostream>
using namespace std;

void selection_sort(int *arr ,int i, int n)
{
    // base condition 
    if(i>=n-1)
    {
        return ;
    }
    else
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        selection_sort(arr,i+1,n);
    }
   
}

void  print(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    selection_sort(arr,i,n);
    
    // print kara lena hai array ko
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

  // print(arr,n);
    return 0;
}
