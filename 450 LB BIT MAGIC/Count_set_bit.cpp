#include <iostream>
using namespace std;
int set_bit(int n)
{
    int  count=0;
    while(n>0)
    {
    if(n&1)
    {
        count++;
    }
    n=n>>1;
    }
    return count;
}


int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=set_bit(n);
    cout<<ans;
    return 0;
}