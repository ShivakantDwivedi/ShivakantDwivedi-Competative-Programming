#include <iostream>
using namespace std;

int set_bit(int x)
{
    int count=0;
    while(x>0)
    {
        int last=x%2;
        if(last==1)
        {
            count++;
        }
        x=x/2;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<set_bit(n);
    return 0;
}