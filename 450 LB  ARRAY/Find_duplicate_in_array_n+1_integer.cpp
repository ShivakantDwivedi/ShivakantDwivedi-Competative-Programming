#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void duplicate_element(int *arr , int n)
{
    vector<int >ans;
    sort(arr,arr+n);

}


int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"Enter the element in an array"<<endl;
    int *arr=new int [n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Printing the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    duplicate_element(arr,n);
    return 0;
    
}