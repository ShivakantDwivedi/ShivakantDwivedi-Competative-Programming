#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1;
    while(n>=x) // tab tk kare ge jb tk n>=x ke
    {
        n=(n^x); // esme xor kare ge or phir n me store bhi karaye ge
        x=x<<1;     // phir x wale ko left shift kare ge tb tk kare ge jb tak n>=x ke
    }
    cout<<n;
} 
