#include <iostream>
using namespace std;

void  selection_sort(int arr[] , int n)
{
    for(int i = 0; i< n-1 ; i++)
    {
        int min_index = i;
        for (int j= i+1 ;  j<n ; j++)
        {
            if (arr[j] < arr[min_index])
            min_index = j;

        }
        swap(arr[i], arr[min_index]);
    }
}

void  print(int arr[], int n)
{
    for (int i=0 ; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }


}


int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the element"<<endl;
    for (int i=0 ; i< size ; i++)
    {
        cin >> number[i];
    }

    selection_sort(number,size);
    print(number,size);
    return 0;
}