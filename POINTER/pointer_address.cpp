#include <iostream>
using namespace std;
int main(){
    int i=5;
    int *p=&i;
    cout<<&p<<endl;
    cout<<p<<endl;
    cout<<&i<<endl;
    p=p+1;
    cout<<"After  Updation "<<p<<endl;
}