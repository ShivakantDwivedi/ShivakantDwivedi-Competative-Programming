#include <iostream>
#include  <vector>
using namespace std;

int main(){
    int arr[100][100];
    int n,m;
    cout<<"Enter the no.of row"<<endl;
    cin>>n;
    cout<<"Enter the no. of col"<<endl;
    cin>>m;
    cout<<"Enter the value in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Printing Matrix"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}