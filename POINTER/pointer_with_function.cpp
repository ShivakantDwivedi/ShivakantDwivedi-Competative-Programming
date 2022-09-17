#include <iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
    cout<<p<<endl;
}

void update(int *p)
{               // pass by value wala kaam chale ga ki value ki copy rakhi jaaye gi
   // p=p+1;  BUT jb bhi address pass kare ge to address update nhi ho ga
    //cout<<"During the modification"<<p<<endl;
    *p=*p+1; // mtlabh ki jb bhi pointer me value pass kare ge to value update hogi
}           // pass by reference wala kaam ho ga ki poori value change hogi


int getSum(int arr[],int n) //arr[] likho chahe *arr but original me yaha pe pointer pass ho rhai hai
{
    cout<<endl<<" Size : "<<sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i]; // eska matlabh *(arr+i)
    }
    return sum;
}

int main(){
   // int i=4;
  //  int *ptr=&i;
  //  cout<<"Before"<<*ptr<<endl;
   // print(ptr);
  /// update(ptr);
  // cout<<"After modification "<<ptr<<endl;
   // cout<<"After  modification "<<*ptr<<endl;

    int arr[6]={1,2,3,4,5,8};
   // cout<<sizeof(arr[0]);
    cout<<"SUM is "<<getSum(arr,6)<<endl;

    return 0;
}