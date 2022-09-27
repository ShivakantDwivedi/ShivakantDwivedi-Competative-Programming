#include <iostream>
using namespace std;

int convert_number_into_char(char ch)
{
    int temp;
    temp=ch-'0';
    return temp;
}

int main(){
    char ch='b';
    cout<<convert_number_into_char(ch)<<endl;
    return  0;
}