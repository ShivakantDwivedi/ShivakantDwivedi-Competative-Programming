#include <iostream>
using namespace std;

int max(int arr[],int n){
    int maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    return maxi;

}

int min(int arr[],int n){
    int mini=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    return mini;
}


 int main(){
    int  number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    int maxans=max(number,size);
    int minans=min(number,size);
    cout<<"Maximum number is"<<maxans<<endl;
    cout<<"Minimum number is"<<minans<<endl;
    return 0;
}