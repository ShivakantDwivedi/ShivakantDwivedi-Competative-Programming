#include <iostream>
#include <algorithm>
using namespace std;

int non_repeating(int arr[],int n)
{
    
    sort(arr,arr+n);
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            i++;
        }
        else{
           cout<<arr[i]<<" ";
        }
        
    }
   
}
int main(){
    int number[6]={1,2,3,2,1,4};
    non_repeating(number,6);
    
    return 0;
}