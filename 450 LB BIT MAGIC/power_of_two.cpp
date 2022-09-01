//   METHOD  1
/*#include <iostream>
#include <math.h>
using namespace std;


bool power_of_two(int x)
{
    for(int i=0;i<x;i++)
    {
        int ans=pow(2,i);
        if(ans==x)
        {
            return true;;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<power_of_two(n);
    return 0;

} */

  // METHOD 2

  #include  <iostream>
  using namespace  std;

bool power_of_two(int x)
{
    if(x==0)
    return false;

    if((x & (x-1))==0)
    return true;

    else 
    return false;
}



  int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<power_of_two(n);
    return 0;
  }

