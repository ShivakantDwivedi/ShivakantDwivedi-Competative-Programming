// input abcd output FALSE not palindrome
// input abba output TRUE palindrome

#include <iostream>
using namespace std;

bool check_palindrome(string str,int i ,int j)
{
    // base condition
    if(i>j)
    {
        return true;
    }
    
    if(str[i]!=str[j])
    {
        return false;
    }
    else
    {
     return check_palindrome(str, i+1 , j-1);
   
    }
}


int main(){
    cout<<"Enter the name "<<endl;
    string str;
    cin>>str;
    int ans=check_palindrome(str,0,str.length()-1);
    if(ans)
    {
        cout<<"Its is Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }
    return 0;
}