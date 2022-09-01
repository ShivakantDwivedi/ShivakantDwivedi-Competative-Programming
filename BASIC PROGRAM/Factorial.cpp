#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int ans=1;
    while(i<=n)
    {
        ans=ans*i;
        i=i+1;
    }
    cout<<ans;
}