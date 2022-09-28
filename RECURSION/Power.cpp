/* input 2 power 3 output 8

input 3 power 2 output 9
*/

#include <iostream>
using namespace std;

int power(int n,int p)
{
    if(p==1)
    {
        return n;
    }
    else
    {
        return n* power(n,p-1);
    }
}


int main(){
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    int p;
    cout<<"Enter the power"<<endl;
    cin>>p;
    int ans=power(n,p);
    cout<<ans;
    return 0;

    
}