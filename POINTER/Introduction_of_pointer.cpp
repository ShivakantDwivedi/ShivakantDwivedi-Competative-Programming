#include <iostream>
using namespace std;




int main(){

/*int i=10;
int *p=&i; 
cout<<"value "<<*p<<endl; // *p=&i eska matlab value at address i at point p
cout<<"Address "<<p<<endl;

cout<<"Copy the value of one pointer to other"<<endl;
int *q=p;
cout<<"Value of p stored in q"<<endl;
cout<<*q<<endl;

cout<<"Performing  Operation"<<endl;
 int j=5;
 int *m = &j;
 cout<<*m++<<endl;
 int *z=m+1; // eska matlab hai ki address at m +1 store ho ga
 cout<<*z;
 //cout<<*m++<<endl;
 //cout<<*m<<endl;
 //m=m+1;
//cout<<"Increment it"<<endl;
 //cout<<m; // ye address print kare ga
 */


 /*
int i=5;
int *p=0;
//cout<<*p<<endl; error  segmentation falt because 0 ki memory create nhi  ho gi
p=&i;
cout<<p<<endl;
cout<<*p<<endl;


*/


int num=5;
/*
int a=num; 
cout<<"a before "<<num<<endl;
a++;
cout<<"a  after "<<num<<endl;
cout<<"a  after "<<a<<endl;

*/

int *p=&num; // pointer wale case me copy nhi banti hai value change ho gi to har jagah change ho gi vo value
cout<< " a before "<< num  <<endl;
(*p)++;
cout<<"after "<< num <<endl; // ye es liye increment ho gya because p is pointing to num wla box to kuch bhi kare ge usme vo to badhe ga hi 


// copying pointer
int *q=p;
cout<<p << " ----"<<q <<endl;
cout<<*p<<" ------"<<*q<<endl;


// important concept

int i=3;
int *t=&i;
*t=*t+1;
cout<<"value of t is "<<*t<<endl;
cout<<"Before t "<<t<<endl;
t=t+1;  // ye 1 matlabh ki address 1 se increment nhi ho rha hai yek nayi memory create ho rhi hai jo li  integer data type me hai
cout<<"after t"<<t<<endl;


return 0;
}