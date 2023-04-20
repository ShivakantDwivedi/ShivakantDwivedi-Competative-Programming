#include <iostream>
using namespace std;

void solve (string str , int index , string ans)
{
    if(index==str.size())
    {
        cout<<ans<<endl;
        return ;
    }

    // include case
    solve(str,index+1, ans+str[index]);

    // exclude casee
    solve(str,index+1,ans);
}



int main(){
    string str="abc";
    string ans="";
    solve(str, 0, ans);
    return 0;
}