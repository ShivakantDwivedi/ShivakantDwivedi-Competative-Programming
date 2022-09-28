// input 243 output 2 4 3 
// input  459 output  4 5 9

#include <iostream>
using namespace std;

void digit(int n)
{
    if(n==0)
    return ;
    else
    {
        int ans=n%10;
        digit(n/10);
        cout<<ans<<endl;
    }
}


int main(){
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    digit(n);
    return 0;
}