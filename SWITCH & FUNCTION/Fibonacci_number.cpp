#include <iostream>
using namespace std;
void fibonacci()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b;
    for(int i=3;i<=n;i++)
    {
        int nextnumber=a+b;
        cout<<" "<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
    return;

}
int main(){
    fibonacci();
    return 0;
}