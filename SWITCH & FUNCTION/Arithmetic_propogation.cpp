#include <iostream>
using namespace std;

int AP()
{
    int n;
    cout<<"Enter the nth term";
    cin>>n;
    int ans=(3*n+7);
    return ans;
}



int main(){
    int ans=AP();
    cout<<ans;
    return 0;
}