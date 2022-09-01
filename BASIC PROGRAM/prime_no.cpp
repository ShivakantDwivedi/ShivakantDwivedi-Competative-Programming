#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Number is not prime";
            return 0;
        }
        else{
            i=i+1;
        }
        
    }
    cout<<"Number is prime number";

}