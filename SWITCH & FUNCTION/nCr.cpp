#include <iostream>
using namespace std;
int factorial(int n)
{
    int ans =1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
}
int nCr(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int r;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int num=factorial(n);
    int den=factorial(n-r)*factorial(r);
    return num/den;
}


int main(){
    int ans=nCr();
    cout<<ans;
    return 0;
}