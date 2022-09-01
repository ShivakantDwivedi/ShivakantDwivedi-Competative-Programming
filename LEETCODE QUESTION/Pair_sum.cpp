#include <iostream>
using namespace std;
void pairsum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
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
    pairsum(number,size,sum);
    return 0;
}