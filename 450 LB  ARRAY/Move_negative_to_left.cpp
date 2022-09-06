#include <iostream>
using namespace std;

void  Move_0_to_left(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
    int min=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[min]>arr[j])  // esme hamne selection sort use kr liya hai
        
        {
            min=j;
        }
    }
    swap(arr[i],arr[min]);
   }
}

 void print(int arr[],int n)
   {
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   }
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the elememt in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    Move_0_to_left(number,size);
    print(number,size);
    return 0;
}