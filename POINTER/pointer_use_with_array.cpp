#include <iostream>
using namespace  std;
int main(){

   // int arr[10]={23,112,41,67};

   /* cout<<"Address of first memory"<<" "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block"<<" "<< &arr[0]<<endl;


    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr+2)<<endl;

    int i=3;
    cout<<i[arr]<<endl;  // eska matlabh *(arr+i)

*/
    int temp[10]={1,2};
    cout<<"Size of  temp is"<<sizeof(temp)<<endl;
    cout<<"Size of is "<<sizeof(*temp)<<endl;
    cout<<"Size is "<<sizeof(&temp)<<endl; // yaha pe es liye 4  byte  hoga because abhi temp ki hi bbat ho rhi hai

   /* int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    */

    int a[20]={1,2,3,5};
   // cout<<"-->"<<&a[0]<<endl;
    //cout<<&a <<endl;
   // cout<<a<<endl;



    int *p=&a[0];
    //cout<<p<<endl; // (p) eska matlabh address of a at 0 index 
   // cout<<*p<<endl;
   // cout<<"-->"<<&p<<endl; // &p eska matlabh address of p 

    int arr[10];

  //   arr=arr+1; ye Error hai

    int *ptr=&arr[0];
    cout<<ptr<<endl; // ye ptr ka address print kr rha hai
    cout<<&ptr<<endl;  // ye pointer ptr ka address print kr  rha hai
    ptr=ptr+1;
    cout<<ptr<<endl;

    return 0;

}


