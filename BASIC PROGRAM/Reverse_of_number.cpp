#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int reverse=n%10;
        cout<<reverse;
        n=n/10;
    }
}
