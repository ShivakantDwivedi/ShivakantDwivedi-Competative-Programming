#include <iostream>
using namespace std;
bool isprime()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int ans=isprime();
    if(ans==0)
    cout<<"number is not prime";
    else
    cout<<"number is prime number";
    return 0;
}