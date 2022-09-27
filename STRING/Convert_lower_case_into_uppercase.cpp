#include <iostream>
using namespace std;

char lower_case_into_uppercase(char n)
{
    char temp;
    if(n>= 'a'  &&  n<='z')
    {
    return temp=n-'a'+'A';
    }
}



int main(){
    char ch='a';
    cout<<lower_case_into_uppercase(ch)<<endl;
    return 0;
}