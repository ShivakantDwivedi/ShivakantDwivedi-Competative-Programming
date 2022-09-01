#include <iostream>
using namespace std;

int value_of_index(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i+1)
        {
            return arr[i];
        }
    }
}
int main(){
    int number[100];
    int  size;                  
    cout<<"Enter  the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    cout<<"Answer  the index is"<<value_of_index(number,size);
    return 0;
}