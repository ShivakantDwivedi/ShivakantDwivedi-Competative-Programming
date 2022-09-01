#include <iostream>
using namespace std;

void reverse(int arr[],int n)  // reverse wala call kiya hai phir ye bad me reverse wale ke pass jai ga main ke inside
{
    int start=0;       //  call by reference wala poora khela hai ki base address jata hai or update karne pe main me bhi update hota hai
    int end=n-1;
        while(start<=end)    // we do swap by this also
        { 
         swap(arr[start],arr[end]);
        start++;
        end--;                                /* int temp=arr[start];
                                              arr[start]=arr[end];
                                                 arr[end]=temp;
                                                start++;
                                                end--;
                                                */

        
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
    int number[100];
    int size;
    cout<<"Enter the  size of an array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    reverse(number,size);
    print(number,size);
    return 0;
}