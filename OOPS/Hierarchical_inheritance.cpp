#include <iostream>
using namespace std;


// Heirarchical Inheritance ka concept use ho rha hai
class A {
    public:
    void fun1(){
        cout<<"function 1 called"<<endl;
    }
};

class B: public A{
    public:
    void fun2(){
        cout<<"Inside function 2 called"<<endl;
    }
};

class C: public A{
    public:
    void fun3(){
        cout<<"Inside function 3 called"<<endl;
    }
};


int main(){

    A object1;
    object1.fun1();

    B object2;
    object2.fun1();
    object2.fun2();

    C object3;
    object3.fun1();
   //  object3.fun2();  yaha pe error es liye aa jai ga because class C fun 2 wale class ko inherit nhi kr rha hai
    object3.fun3();


    return 0;

}