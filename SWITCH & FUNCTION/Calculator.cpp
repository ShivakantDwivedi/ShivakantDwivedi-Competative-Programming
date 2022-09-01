#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operator"<<endl;
    cin>>op;
    switch(op){
        case '+': cout<<(a+b);
                break;
        case '-': cout<<(a-b);
                break;
        case '*': cout<<(a*b);
                break;
        case '/': cout<<(a/b);
                break;
        case '%': cout<<(a%b);
                break;
        default:  cout<<"Please Enter the valid operation";
                break;        
    }
    return 0;
}