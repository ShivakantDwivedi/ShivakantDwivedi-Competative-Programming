#include <iostream>
using namespace std;

int peak_element(int arr[],int size)
{
    int s=0;                         // ye ek or tareka hai maximum element ka index,element find karne ka hai 
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;

}



int main()
{
    int number[4]={0,10,5,2};
    peak_element(number,4);
    cout<<peak_element(number,4);
    return 0;
}