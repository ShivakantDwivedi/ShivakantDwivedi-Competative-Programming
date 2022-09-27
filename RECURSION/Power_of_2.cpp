#include <iostream>
using namespace std;

int power(int n)
{
    if(n==0)
    return 1;
    else
    {
        return n*power(n-1);
    }
}



int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=power(n);
    cout<<"Answer is"<<ans<<endl;
    return 0;
}