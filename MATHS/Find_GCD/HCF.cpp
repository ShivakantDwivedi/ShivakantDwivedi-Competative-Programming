// find GCD or HCF of the number  24,72 find hcf 
// 24=2*2*2*3   and 72=2*2*2*3*3
// take common then answer is 24

#include <iostream>
using namespace std;

int gcd(int n,int m)
{
    if(n==0)
    return m;

    if(m==0)
    return n;

    while(n!=m)
    {
        if(n>m)
        {
            n=n-m;
        }
        else
        {
            m=m-n;
        }
    }
    return n;
}

int main(){
    int n,m;
    cout<<"Enter the first number"<<endl;
    cin>>n;
    cout<<"Enter the second number"<<endl;
    cin>>m;
    
    int ans=gcd(n,m);
    cout<<"Answer is"<<ans;
    return 0;
}