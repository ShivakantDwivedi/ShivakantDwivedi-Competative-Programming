#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=1; i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        for( ;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else 
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void  print(int arr[],int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element enter in an array"<<endl;
    for (int  i=0 ;  i<size ; i++)
    {
        cin>>number[i];
    }
   insertion_sort(number , size);
    print(number , size);
    return 0;
}