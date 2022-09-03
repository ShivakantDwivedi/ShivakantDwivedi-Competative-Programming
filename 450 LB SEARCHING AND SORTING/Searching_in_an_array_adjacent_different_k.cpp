#include <iostream>
using namespace std;

int searching_adjacent(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
    // take input  {4, 5, 6, 7, 6}, K = 1 
       // and X = 6 output is 2
int main()
{
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    cout<<searching_adjacent(number,size,key)<<endl;;
    return 0;
}

