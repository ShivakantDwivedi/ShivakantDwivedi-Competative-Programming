#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n){
        if(n&1){ // Condition is checking for last bit is one or not.
            count=count+1;
        }
         n=n>>1;
    }
     cout<<count;
}