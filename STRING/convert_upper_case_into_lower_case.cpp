#include <iostream>
using namespace std;

char uppercase_into_lower(char &n)
{
    char temp;
    if(n>= 'A'  &&  n<='Z')
    {
     return  temp=n-'A'+'a';
    }
}



int main(){
    char ch='A';
    cout<<uppercase_into_lower(ch)<<endl;
    return 0;
}