/*


#include <iostream>
using namespace std;
 void rearrange_alternative(int *arr, int n)
 {
    int *neg=new int [n];
    int *pos =new int [n];
    int k=0;
    int m=0;
 
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            pos[k]=arr[i];
            k++;
        }
        else
        {
            neg[m]=arr[i];
            m++;
        }
    }
       int t=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[t]=neg[i];
            t+2;
        }
    }
    int z=1;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            arr[z]=pos[i];
            z+2;
        }
    }
 }
int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rearrange_alternative(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

*/
#include <iostream>
using namespace  std;

void rearrange_alternative(int *arr, int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j++]);
        }
    }
    int s=1;
    int e=n-s-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s=s+1;
        e=e-1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rearrange_alternative(arr,n);
    return 0;
}






















