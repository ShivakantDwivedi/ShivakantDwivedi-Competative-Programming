#include <iostream>
using namespace std;
void print(int arr[],int size) // esme maine name change karke arr save kkr diya  hai
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]; // vahi yaha pe  bhi ho gga
    }
}
int main(){
    int number[100];
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    print(number,size);
    return 0;
}