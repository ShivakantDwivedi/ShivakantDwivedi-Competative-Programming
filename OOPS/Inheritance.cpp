#include <iostream>
using  namespace std;

// super class
class Human { // ye parent class hai or student child class hai

    public:
    int height;
    int weight;
    int  age;


    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int w){
        this->weight=w;
    }

};



class Male:private Human{ // ye hm private class kiye thay  to ye bhi inaccesible hai error aa jai ga
// because hm public class me private class ko access nhi kr sakte hai
 public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }
};



/*
// super class public thi but ham jo child class banaye thay uski protected kiye thay to v
//protected  mode ke vajah se sirph child class ke andar access ho pai ga
class Male:protected Human{ // ye hm protected class kiye thay  
 public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }
};



/*
// subclass
class Male: public Human{ // yaha inheritance ka use ho rha hai student class ki property ko inherit kr le rha hai

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;


    }

};
*/


int main(){



    Male m1;
    // cout<<m1.height<<endl; ye jaise ki error show ho rha hai 
    cout<<m1.getHeight()<<endl;//eskko acess krne ki getter setter ka use krna pade ga
    
/*
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;

    object1.setWeight(811);
    cout<<object1.weight<<endl;
    
    object1.sleep();

*/
    return 0;
}