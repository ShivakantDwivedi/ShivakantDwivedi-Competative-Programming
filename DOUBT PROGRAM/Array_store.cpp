#include  <iostream>
using namespace std;

void sum(int arr[], int n)
{
   int brr[100];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        brr[100]=sum; 
    }
    int m=brr.size();
   
    for(int i=0;i<m;i++)
    {
        cout<<brr[i];
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

    sum(number,size);
    return 0;
}