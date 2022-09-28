/*
#include <iostream>
using namespace std;

void reverse_single_variable(string &str, int i, int n)
{
    cout<<str<<endl<<endl;
    if(i>n)
    return ;

    else
    {
        swap(str[i],str[n]);
        i++;
    }
    reverse_single_variable(str,i,n-i-1);

}



int main(){
    string str;
    cout<<"Enter the string "<<endl;
    cin>>str;
    reverse_single_variable(str,0,str.length()-1);
    cout<<str<<endl;
    return 0;


}

*/

#include <iostream>
using namespace std;

string reverse_single_variable(string &str, int n )
{
    if(n==0)
    {
    return " ";
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