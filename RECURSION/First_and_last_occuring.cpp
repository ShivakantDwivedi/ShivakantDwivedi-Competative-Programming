#include <iostream>
using namespace std;

int first_occuring(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
           
        }
    }
}

int last_occuring(int arr[],int n,int key)
{
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==key)
        {
            return i;
          
        }
    }
}




int main(){
   
    int number[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
     for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int key;
    cout<<"Enter the key element"<<endl;
    cin>>key;
    cout<<first_occuring(number,size,key);
    cout<<last_occuring(number,size,key);
    return 0;
}