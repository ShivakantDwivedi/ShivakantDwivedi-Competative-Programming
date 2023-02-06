#include <iostream>
using namespace std;

int  pivote(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;

}


int main(){
    int number[5]={7,9,1,2,3};   // Pivote  element hardam middle me hi hoga ussek left me saarre soted element right me saare sorted element
    pivote(number,5);
    cout<<"Pivote element is at index "<<" "<<pivote(number,5);
    return 0;
}