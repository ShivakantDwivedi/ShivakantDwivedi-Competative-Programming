#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int>p;

    p.push(20);
    p.push(60);
    p.push(90);
    cout<<p.front()<<endl;
    cout<<p.size()<<endl;
    p.pop();
    cout<<p.size()<<endl;
    p.pop();
    cout<<p.size()<<endl;
    if (p.empty())
    cout<<"Queue is empty"<<endl;
    else
    cout<<"Queue is not empty"<<endl;

}