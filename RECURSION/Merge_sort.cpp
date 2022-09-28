#include <iostream>
using namespace std;

void merge(int *arr, int start, int end )
{
 
    int mid=start+end/2;

    int length1=mid-start+1;

    int length2=end-mid;

    // ye array 1 ki length ka expression hai mid-start+1
    int *arr1=new int [length1];

    // ye array 2 ki length ka expression hai end - mid
    int *arr2=new int [length2];

   // ab array 1 ke andar element ko dalna hai

   int k=0;
   for(int i=0;i<length1;i++)
    {
        arr1[i]=arr[k++];
    }

    // ab array 2 ke andar element ko dalna hai
    k=mid+1;
    for(int j=0;j<length2;j++)
    {
        arr2[j]=arr[k++];
    }

    int index1=0;
    int index2=0;
    k=0;
    while(index1<length1 && index2<length2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr[k++]=arr1[index1++];
        }

        else
        {
            arr[k++]=arr2[index2++];
        }

    }

    while(index1<length1)
    {
       arr[k++]=arr1[index1++]; 
    }

    while(index2<length2)
    {
       arr[k++]=arr2[index2++];  
    }

    delete [] arr1;
    delete [] arr2;

}




void merge_sort(int *arr, int start, int end )
{
    if(start>=end)
    {
        return ;
    }
    int  mid= start+(end-start)/2;

    // partition of left part
    merge_sort(arr,0,mid);

    // partition of right part
    merge_sort(arr,mid+1,end);

    merge(arr,0,end);

}

int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the element in the element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}