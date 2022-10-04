/*
Sample Input 1 :
2
N2 i&nJA?a& jnI2n
A1b22Ba
Sample Output 1 :
Yes
No
Explanation 1 :
For the first test case, S = “N2 i&nJA?a& jnI2n”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “n2injaajni2n”, which is a palindrome. Hence, the given string is also a palindrome.

For the second test case, S = “A1b22Ba”. If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “a1b22ba”, which is not a palindrome. Hence, the given string is not a palindrome.
Sample Input 2 :
3
codingninjassajNiNgNidoc
5?36@6?35
aaBBa@
Sample Output 2 :
Yes
Yes
No



 NOTE Ignore unwanted character
*/
#include <iostream>
using namespace std;

char uppercase_into_lowercase(char n)
{
    char temp;
    if(n>='A'  && n<='Z')
    {
    return  temp=n-'A'+'a';
    }
}


bool palindrome(string &s)
{ 
    string str;
    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
        {
            str.push_back(s[i]);
        }
    }
    int start=0;
    int end=str.length()-1;
    while(start<=end)
    {
        if (uppercase_into_lowercase(s[start])!=uppercase_into_lowercase(s[end]))
        {
        return 0;
        }
        start++;
        end--;
    }
    return 1;

}



int main(){
    string name;
    cout<<"Enter your name"<<endl;
   getline(cin,name);
    cout<<palindrome(name)<<endl;
    return 0;
}