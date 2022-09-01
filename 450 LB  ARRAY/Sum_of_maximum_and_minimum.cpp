#include <iostream>
using namespace std;

long long int maximum(int arr[],int n)
{
    long long int max=0;
    for(int i=1;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
            max=i;
        }
    }
    return arr[max];

}

long long  minimum(int arr[],int n)
{
  long long  min=0;
    for(int i=1;i<n;i++)
    {
        if(arr[min]>arr[i])
        {
            min=i;
        }
    }
    return arr[min];

}



int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    long long int  ans1=maximum(number,size);
    cout<<"Maximum is"<<ans1<<endl;
  long long int  ans2=minimum(number,size);
    cout<<"Manimum is"<<ans2<<endl;
    long long  int ans3=ans1+ans2;
    cout<<"The sum of maximmum and mininum is "<<ans3<<endl;
    return 0;
}