#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Love Babbar "<<endl;
    }

    int sayHello(char name)
    {
        cout<<"Hello Love Babbar"<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"Hello"<<name<<endl;
    }

  
    // agr ek hi function ek hi namme ka ho to uske parameter ka return type change kare ge tabhi hm usko access kr pai ge 
    // esi ko kahte hai function overloading

};



int main(){

    A obj;
    obj.sayHello();

    return 0;
}