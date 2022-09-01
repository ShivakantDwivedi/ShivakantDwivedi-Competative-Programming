#include  <iostream>
using namespace std;

 void  sort_0_1_2(int a[], int n)
    {
        int low=0;
        int high =n-1;
        int mid=0;
        while(mid<=high)
        {
            if(a[mid]==0)
            {
                swap(a[mid],a[low]);
                low++;
                mid++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            } 
        }
    }


   void print(int arr[],int n)
   {
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
   }



int main(){
    int number[100];
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin>>size;
    cout<<"Enter the elememt in an array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>number[i];
    }
    sort_0_1_2(number,size);
    print(number,size);
    return 0;
}