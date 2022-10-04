
#include <iostream>
using namespace std;

void reverse_array(int *arr, int start,int size, int position)
{
    int temp[100];
    int m=0;
    for(int i=position;i<size;i++)
    {
        temp[m]=arr[i];
        m++;
    }
    for(int i=start;i<position;i++)
    {
        temp[m]=arr[i];
        m++;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<temp[i];
     }
}


int main() {
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    int k;
    cin>>k;
    reverse_array(arr,0,n,k);
    return 0;

}