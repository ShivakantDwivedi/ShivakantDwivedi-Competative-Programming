#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Printing the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}