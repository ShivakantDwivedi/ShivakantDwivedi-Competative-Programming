/*
Check that array is sorted
input 1 2 5 6 7  output 1
input 1 4 3 9 5 output 0

*/

#include <iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}


bool check_sorted(int *arr,int n)
{

    print (arr,n); // yaha print kara lena hai
    // base condition
    if(n==0) // agr array ki size 0 ho means element hi na ho
    {
        return true;
    }
    if(n==1) // agr array me sirph ek hi element ho
    {
        return true;
    }

    if(arr[0]>arr[1]) // agr pahla element graeter ho dosre  wale element se
    {
        return false;
    }

    else
    {
        return check_sorted(arr+1,n-1); // phir array ko aage badha le ge or size ek kam karte rahe ge
    }
}


int main(){
    cout<<"Enter the size of an array"<<endl;
    int n;
    cin>>n;
    int *arr= new int [n];
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=check_sorted(arr,n);
    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;


}