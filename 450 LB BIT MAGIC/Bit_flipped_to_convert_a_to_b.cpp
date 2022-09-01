#include <iostream>
using namespace std;
int flip_bit(int n,int m)
{

    int count=0;
    while(m||n)
    {
        if(m%2 != n%2)
        {
            count++;
        }
        n=n/2;
        m=m/2;
    }
    return count;

}
int main(){
    int n;
    cout<<"Enter the first number"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the second number"<<endl;
    cin>>m;
   cout<<flip_bit(n,m);
    return 0;
}