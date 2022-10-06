#include <iostream>

// if we want to include class to another file then we use 
// #include " class_name.cpp"
using namespace std;

class Hero{ // class ek user  defined data type hai , by default class have private modifier

    // property or data member


    //public: // matlabh kahi pe bhi access kar sakte ho

    private:
 
   int health; // agr yaha koi property nhi hoti empty class tb bhi size 1bye allocate ho gi 
              // because for identification rakhne ke liye

  
   //  private: // ye sirph class ke anadar access kar sakte hai class ke bahar acess nhi kar sakte ho   

   public: 

   char *name;      
    char level;
    static int timeTOComplete;


    // Default Constructor
    Hero(){ 
        cout<<"Default  Constructor called"<<endl;
        name=new char[100];
    }


    // Parameterised Constructor used thhis 
    Hero(int health){
        //cout<<"Adress of this is"<<this<<endl;
        this->health=health; // this-> is a KEYWORD which act like a type of pointer jo ki current object ka adreess store kr ke rakha hai
                        // mtlabh ramesh kee health ke andar function wali health ki value ko daal do
    }


    Hero(int health, char level)
    {
        this->health=health;
        this->level=level;
    }

    /*
    // apna khud ka write copy constructor
    Hero(Hero &temp) // ya pe reference pass karna bahut important hai
    {
        cout<<"Copy Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }
    */


    void print()
    {

        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }

    // having two  KEYWORD jb kooi chize private marked hai 
    // GETTER used to fetch SETTER use to set the value

    int  getHealth() // if data member are in private we want to access we use get and set keyword to  access them
    {
        return health;
    }

     int  getlevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health=h;
    }

     void setlevel(char ch)
    {
        level = ch;
    }

    void setName(char name[])
    {
       //  strcpy(this->name,name);
    }

    static int random(){ // eksa  matlabh static function sirph static wale ko calll karta hai
        return timeTOComplete;
        // agr ham yaha return health ya return level ya return name kare ge to error aa jai ga kyoki ye  domo class ke anadar hai but  static defind nhi hai 
    }


    ~Hero(){
        cout<<"Destructor bhai called"<<endl;
    }

};

int Hero :: timeTOComplete=5;



int main(){


    cout<<Hero:: random()<<endl;





   // cout<<Hero :: timeTOComplete; // staticly print esme object  ki jarrorat nhi hoti sirpf class ki jarrorat hoti hai




    /*

    // static
    Hero a; // destructor automatically called

    // Dynamicaly
    Hero *b=new Hero();
    // maunally destructor called

    delete b;


    /*
        Hero hero1;
        hero1.setHealth(12);
        hero1.setlevel('D');
        char name[7]="Babbar";
        hero1.setName(name);

        hero1.print();

        Hero hero2(hero1);

     /*
        Hero S(70,'C');
        S.print();

           // copy constructor  jb class likhte hai tb vo apne aap vo copy kr deta hai usko alag se banane ki jarrorth nhi hoti hai
        Hero R (S); //R.health= S.health and   R.level= S.level;
        R.print();
      

       

        /*
        // object created statically
       // cout<<"HII"<<endl;
       // Hero ramesh; // constuctor called
       // cout<<"hello"<<endl;



        Hero Ramesh(10);
        Ramesh.print();
      //cout<<"Adress of Ramesh is"<<&Ramesh<<endl;
    
        Hero *h=new Hero;
        h->print();


        Hero temp(22,'B');
        temp.print();





        /*
        // creting object of Hero type name h1
       // Hero ramesh; // static allocation

        Hero a;


        a.setHealth(45);
        a.setlevel('W');
        cout<<"level is "<< a.level<<endl;
        cout<<"Health is "<<a.getHealth()<<endl;

        //dynamicaly allocation
        Hero *b=new Hero;


        b->setHealth(100);
        b->setlevel('Z');
        cout<<"level is "<< (*b).level<<endl;  // yaha pe b likhe ge to error kyoki b address store karta hai but haamne pointer create kiya hai
        cout<<"Health is "<<b->getHealth()<<endl;// ek or tarekaa b-> or (*b) if stored in dynamically


       //(*b).setHealth(22);
        cout<<"Health of Ramesh  is"<<(*b).getHealth()<<endl;






        /*
        cout<<"Size of Ramesh  is" <<sizeof(ramesh)<<endl;

                                    // it give garbage value kyoki ham inisilized nhi kiye hai          
        cout<<"Health of ramesh is "<<ramesh.getHealth()<<endl; // by using get keyword
      //  ramesh.health=70; // set the value
        ramesh.level='A';

        // access karne ke liye . use  hota hai
        //cout<<"health is"<<ramesh.health<<endl;



        // use of  setter 

        ramesh.setHealth(99);

        cout<<"health is "<<ramesh.getHealth()<<endl;
        cout<<"level is "<<ramesh.level<<endl;



       // cout<<"size of"<<sizeof(h1)<<endl;

        */
    
   return 0;
}