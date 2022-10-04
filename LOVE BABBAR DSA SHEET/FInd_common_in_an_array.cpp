#include <iostream>
#include <algorithm>
using namespace std;

int common(int *arr, int *brr, int n, int m)
{
    sort(arr,arr+n);
    sort(brr,brr+m);
    int count=0;
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr[i]<brr[j])
        {
            i++;
        }
        else if(arr[i]>brr[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
            count++;
        }
    }
    return count;
}

int main(){
    cout<<"Enter the size of an array1"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the element in an arry"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"Enter the size of an array2"<<endl;
    int m;
    cin>>m;
    cout<<"Enter the element in an arry"<<endl;
    
     int *brr=new int [m];
    for(int i=0;i<m;i++)
    {
        cin>>brr[i];
    }
   cout<<common(arr,brr,n,m);
   return 0;
}