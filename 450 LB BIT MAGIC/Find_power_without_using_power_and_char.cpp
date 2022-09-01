#include <iostream>
using namespace std;

int power(int n)
{
    int res=n;
    for(int i=1;i<n;i++)
    {
        res=res+n;
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter the number whose power"<<endl;
    cin>>n;
    cout<<"Power of number is "<<power(n);
    return 0;
}