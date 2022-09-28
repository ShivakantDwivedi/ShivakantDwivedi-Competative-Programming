// input number 2 power 3 output is 8
// input number 3 power 2 output is 9

#include <iostream>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    return 1;

    if(p==1)
    return n;

    int ans=power(n,p/2);

    if(p % 2 ==0)
    {
        return ans * ans;
    }

    else
    {
        return n * ans *ans;
    }
}


int main(){
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the power"<<endl;
    int p;
    cin>>p;
   int ans= power(n,p);
   cout<<ans<<endl;
   return 0;


}