/* 
An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

Examples : 

Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5

*/



#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0 ; j<n-i-1;j++)  // ya n-i-1 bta rha ki last wali value ko nhi check kare ga
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


void  print(int arr[],int n)
{
    for (int i=0; i<n;i++)
    {
        cout<<arr[i];
    }
}
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element enter in an array"<<endl;
    for (int  i=0 ;  i<size ; i++)
    {
        cin>>number[i];
    }
    bubble_sort(number , size);
    print(number , size);
    return 0;
}