#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of an array1"<<endl;

    cout<<"Enter the element in an array"<<endl;
    int **arr=new int *[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int [n];
    }

    cout<<"Enter the element in an arrray"<<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}