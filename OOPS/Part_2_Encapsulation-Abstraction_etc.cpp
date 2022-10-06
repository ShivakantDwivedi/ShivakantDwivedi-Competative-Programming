#include <iostream>
using namespace std;

class Student {

    // Encapsulation hai ye yaha sb private ke andar sabhi data member hote hai
    private:

    string name;
    int age;
    int height;

    public:
    int getAge() {
        return this->age;
    }

};




int  main(){

    Student first;

    cout<<"Sab sahi chal rha hai"<<endl;

    return 0;

}