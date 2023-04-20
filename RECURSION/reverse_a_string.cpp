#include <iostream>
using namespace std;


void solve(string &str, int i, string &ans)
{
    if(i==str.size())
    {
        return ; 
    }

    solve(str,i+1,ans);
     ans.push_back(str[i]);
}



int main(){
    string str="babbar";
    string ans="";
    solve(str, 0, ans );
    cout<< ans<<endl;
}