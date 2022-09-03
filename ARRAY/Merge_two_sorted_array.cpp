#include <iostream>
using namespace std;

void  merge_sorted_array(int arr1[],int n,int arr2[],int m,int arr3[],int k)
{
    int i=0;
    int j=0;
    k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    
    while(i<n)
    {
        arr3[k]=arr1[i];
        k++;
        i++;

    }

    while(j<n)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
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
    int arr1[5]={2,4,6,8,10};
    int arr2[2]={1,3};
    int arr3[7]={0};
    merge_sorted_array(arr1,5,arr2,2,arr3,7);
    print(arr3,7);
    return 0;
}

