// input 8 2 1 0 7 5   output 0 1 2 5 7 8 

#include  <iostream>
using namespace std;


int partition(int *arr , int start, int end)
{
    int pivote=arr[start];
    int count=0;
    
    // kitni value pivote se choti hai
    for(int i=start+1 ;i <= end ; i++ )
    {
        if(pivote >= arr[i])
        {
            count++;
        }

    }
    int pivote_index = start + count;
    swap(arr[pivote_index], arr[start]); 

    int i=start;
    int j=end;

    while(i < pivote_index && j > pivote_index)
    {
        while(arr[i] <= pivote) 
        {
            i++;
        }

        while(arr[j] > pivote) 
        {
            j--;
        }

        if (i < pivote_index && j > pivote_index)
        {
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivote_index;
}

void quick_sort(int  *arr, int start , int end)
{
     // base case 
     if (start >= end)
     return ;

     else
     {
        int p=partition(arr,start,end);

        // left me check karna to sirph left part hi check hoga na ki partition wala  
        quick_sort(arr,start,p-1); // esi liye yaha start se p-1 tk kiya gya hai na ki start se p tk

        // right me check karna hai meatlabh partition wale se aage se last tk na ki partition wala
        quick_sort(arr,p+1,end);
    
     }

}

int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int *arr=new int [n];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    cout<<"Sorted Array is "<<endl;
    for ( int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}