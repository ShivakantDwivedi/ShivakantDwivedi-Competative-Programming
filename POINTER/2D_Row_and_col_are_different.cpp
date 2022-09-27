#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row"<<endl;
    cin>>row;
    cout<<"Enter the col"<<endl;
    cin>>col;

    int  **arr=new int *[row];

    for(int i=0;i<row;i++)
    {
        arr[i]= new int [col];
    }

    cout<<"Enter the element in an array"<<endl;
    for  (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }


    cout<<"Printing the element in an array"<<endl;
     for  (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"";
        }
        cout<<endl;
    }

    // free the memory of the heap

    for(int i=0;i<row;i++)
    {
        delete [] arr[i]; // first delete the coloumn memory
    }

    delete arr;// then delete the row 


}