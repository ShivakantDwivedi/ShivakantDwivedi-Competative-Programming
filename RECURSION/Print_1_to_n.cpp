#include <iostream>
using namespace std;

void number (int n)
{
    if(n==0)
    return;
    else
    number(n-1);
    cout<<n;
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    number(n);
    return 0;
}