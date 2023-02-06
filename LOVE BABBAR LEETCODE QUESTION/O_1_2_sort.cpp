#include <iostream>
using namespace std;

void sort0_1(int arr[],int n)
{
    int low=0;
    int mid=0;      //  esme three pointer chale ge
    int high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0) // agr mid ki value 0 ke barabar ho gi to swap karr lo low and mid wale ko
        {                               
            swap(arr[low],arr[mid]);    // mtlab low and mid dono 0 pe hi hoo
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    sort0_1(number,size);
    print(number,size);
    return 0;
}