#include <iostream>
using namespace std;

class A{
    public:
    void fun(){
        cout<<"I am A"<<endl;
    }

};

class B{
    public:
    void fun(){
        cout<<"I am B"<<endl;
    }

};

class C : public A, public B{



};




int main(){

    C obj;
    // obj .fun();  yaha pe error aa jai ga because C walo  ko nhi pta  kiska function calll krna hai A ka ki B ka
    // esi liye esko hatane ke liye funtion ambgunity ka use hota hai scope resolution operator ka use ::

    obj.A ::fun(); // scope resolution operator batata hai ksi class ka function ap call karna cahte ho
    obj.B :: fun();

    return 0;
}