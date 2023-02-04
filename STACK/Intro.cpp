#include <iostream>
#include <stack>
using namespace std;
int main(){

    stack<int> s;
                    
    s.push(10);
    s.push(20);

    if(s.empty()!=0)
    cout<<"Stack is empty"<<endl;

    else
    cout<<"Stack is not empty"<<endl;


}