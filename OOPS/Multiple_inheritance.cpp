#include <iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;


    public:
    void  bark(){
        cout<<"Barking"<<endl;

    }

};


class Human {

    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }



};


// Multiple Inheritence

class Hybrid :public Animal , public Human{ // yaha pe bs ek couma se multiple inheritence ho jaata haiS




};


int  main(){

    Hybrid obj1;
    obj1.speak();
    obj1.bark();

    return 0;
}