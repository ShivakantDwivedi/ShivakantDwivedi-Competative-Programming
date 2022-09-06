#include <iostream>
using namespace std;
void triplet(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
            if(arr[i] + arr[j] +arr[k] == sum)
            {
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            }
            }
        }

    }
}
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an element"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int sum;
    cout<<"Enter the sum"<<endl;
    cin>>sum;
    triplet(number,size,sum);
    return 0;
}