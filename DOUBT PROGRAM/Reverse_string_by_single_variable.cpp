#include <iostream>
using namespace std;

char reverse_single_variable(string str, int n )
{
    if(n==1)
    {
    return str[0];
    }
    else
    {
      return str[n-1] +reverse_single_variable(str,n-1);
    }

}
int main(){
    cout<<"Enter the string "<<endl;
    string str;
    cin>>str;
    cout<<reverse_single_variable(str,str.length());
    return 0;
    
}