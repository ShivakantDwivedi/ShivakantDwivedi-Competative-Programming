// take input eith getline word

#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the name"<<endl;
    string str;
    getline(cin,str); // es keyword se ham input space de ke bhi le sakte hai 
    // but cin>> me space me null character ho jata  hai
    cout<<str;
    return 0;
}