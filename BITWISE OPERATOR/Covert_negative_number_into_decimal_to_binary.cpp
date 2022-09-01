#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        n=pow(2,16)+n;
    }
    cout<<n;
    unsigned long long int i=0,ans=0; // es liye long long liya gya hai because ans, i bahut jada tak jaa sakta hai
    while(n){
        int lastbit=n&1;
        ans=(lastbit*pow(10,i))+ans; // this is used for reverse the number
        i++;
        n=n>>1;
    }
    cout<<ans;

}