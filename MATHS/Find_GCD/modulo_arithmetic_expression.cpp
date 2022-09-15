#include <iostream>
using namespace std;

int power(int n,int p)
{
        int res=1;
        while(n>0)
        {
            if(n&1)
            {
            res=res * p;
            } 
        p= ( p  ) * ( p)  ;
        n=n >> 1;
        }
        return res;

}

int main(){
    int n,m,p;
    cout<<"Enter the no."<<endl;
    cin>>n;
    cout<<"Enter the power of the number"<<endl;
    cin>>p;
    int ans=power(n,p);
    cout<<"Power of the number is"<<ans<<endl;
    return 0;
}