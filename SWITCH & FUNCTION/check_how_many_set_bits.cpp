#include <iostream>
using namespace std;
int setbit(){
    int a;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    int count=0;
    while(a&b){
        if(a&1){
            count++;
        }
        a=a>>1;
        if(b&1)
        {
            count++;
        }
        b=b>>1;
    }
    return count;
}


int main(){
    int ans=setbit();
    cout<<ans;
    return 0;
}