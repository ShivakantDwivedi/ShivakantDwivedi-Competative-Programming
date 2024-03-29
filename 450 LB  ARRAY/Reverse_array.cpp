/* Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/





#include <iostream>
using namespace std;
void reverse(int arr[],int n)
{
    int start=0;
    int end =n-1;
   while (start<=end)
   {
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
   }
}


void print(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    reverse(number,size);
    print(number,size);
    return 0;
}