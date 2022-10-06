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

class Dog: public Animal{   // ye inherit kr rha hai animal ko


};


class GermanShepherd : public Dog { // Dog inherit kr rha hai GermanShepherd ko

};






int main(){

   GermanShepherd g;
   g.speak();
    
    return 0;
}

