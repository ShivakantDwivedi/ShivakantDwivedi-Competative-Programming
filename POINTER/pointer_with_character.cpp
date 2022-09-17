#include <iostream>
using namespace std;
int main(){

int arr[6]={1,2,3,4,5,6};
char ch[6]="abcde";

cout<<"1 "<<arr<<endl;

cout<<"2  "<<ch<<endl;// ye c++ me rule hota hai ki cout jb bhi ch ke saath lage ga to vo hardam poori value print kare ga na ki address

char *c=&ch[0];
cout<<"3 "<<*c<<endl;
cout<<c<<endl;

char temp='z';
char *p=&temp;
cout<<"4 "<<p<<endl; // ye tabtk print hoga jb tk esko null  character mile ga
cout<<"5 "  <<*p<<endl;

}