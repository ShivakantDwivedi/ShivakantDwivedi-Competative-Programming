#include <iostream>
#include <math.h>
using namespace std;

int square_root_count(int n)
{
    int count=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(i*i<n)
        {
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans1=square_root_count(n);
    cout<<"Answer is"<<ans1<<endl;
    return 0;
}