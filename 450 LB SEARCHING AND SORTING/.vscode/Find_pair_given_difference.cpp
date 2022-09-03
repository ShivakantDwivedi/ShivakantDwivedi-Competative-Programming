// Brute  forse approch

#include  <iostream>
using namespace std;


int pair_difference(int arr[],int n,int  key)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]==key)
            {
                count++;
            }
        }
    }
    return count;
}

int main(){
     
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<"Enter the number"<<endl;
    int key;
    cin>>key;
    cout<<pair_difference(number,size,key);

    return 0;
}