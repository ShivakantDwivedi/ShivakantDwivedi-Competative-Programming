#include <iostream>
using namespace std;

int fibonacci(int x)
{
    int ans;
    // base case 
    if(x==0)
    return 0;
    if(x==1)
    return 1;

    else
    {
       ans=fibonacci(x-1)+fibonacci(x-2); 
    }
    return ans;
}

int main(){
    cout<<"Enter the number"<<endl;
    int n;
    cin>>n;
    int i=0;
    while(i<=n)
    {
    cout<<" "<<fibonacci(i); // yaha pe i ho ga n nhi kyoki ham ek ek value ke liye fib series nikal rhe hai
    i++;
    }

    return 0;
}