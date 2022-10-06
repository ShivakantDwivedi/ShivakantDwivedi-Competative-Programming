#include <iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;


    public:
    void  speak(){
        cout<<"Speaking"<<endl;

    }

};

class Dog: public Animal{  //  example of single  level inheritence 


};






int main(){

    Dog d; // yaha pe dog type ki saari property ko inherit kr rha hai
    d.speak();
    cout<<d.age<<endl;
    
    return 0;
}

