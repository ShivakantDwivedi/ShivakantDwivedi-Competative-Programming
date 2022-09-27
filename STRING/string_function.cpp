#include <iostream>
using namespace std;
int main(){
    string name="Shivakant ";
    
    cout<<"Length of the string "<<name.length()<<endl;
    string :: iterator it;

    for(it =name.begin();it!=name.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<name<<endl;
}