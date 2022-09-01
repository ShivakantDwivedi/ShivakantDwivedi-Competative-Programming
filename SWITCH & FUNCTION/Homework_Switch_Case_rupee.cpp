// Given a amount tell how many 100, 50,20,10 rupee note are there
#include <iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    int Rs100,Rs50,Rs20,Rs10;
    switch(1){
        case 1:Rs100=amount/100; // ye batata hai kitni  100 ki note hai
                amount=amount%100; // ye batata hai kitni bacchi note hai
                cout<<"Number of 100 rupee note" << Rs100 <<endl;
        case 2:Rs50=amount/50;   // ye batata hai kitni  50 ki note hai
                amount=amount%50;// ye batata hai kitni bacchi note hai
                cout<<"NUmber of 50 rupee note"<<Rs50<<endl;
        case 3:Rs20=amount/20;   // ye batata hai kitni 20 ki note hai
                amount=amount%20;       // ye batata hai kitni bacchi note hai
                cout<<"Number of 20 rupee note"<<Rs20<<endl;
        case 4:Rs10=amount/10;   // ye batata hai kitni 10 ki note hai
                amount=amount%10;       // ye batata hai kitni bacchi note hai
                cout<<"Number of 10 rupee note"<<Rs10<<endl;

    }
}