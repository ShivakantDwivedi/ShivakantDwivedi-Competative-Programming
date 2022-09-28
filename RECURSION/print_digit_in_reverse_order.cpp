// input 543 output 3  4  5
// input 398 output 8  9  3

#include <iostream>
using namespace std;

void digit(int n)
{
    if(n==0)
    return ;
    else
    {
        int ans=n%10;
        cout<<ans<<endl;
        digit(n/10);
    }
}



int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    digit(n);
    return 0;

}