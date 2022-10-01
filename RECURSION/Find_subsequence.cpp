/*


Sample Input 1:
1 
abc
Sample Output 1:
a ab abc ac b bc c
Explanation Of Sample Input 1:
All possible subsequences of abc are :  
“a” , “b” , “c” , “ab” , “bc” , “ac”, “abc”
Sample Input 2:
1
bbb
Sample Output 2:
b b b bb bb bb bbb


*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string str, vector<string>&ans, int index , string output)
{
    // base condition
    if(index>=str.length())
    {
       // if(output.length()>0)
        //{
            ans.push_back(output);
       // }
        return ;
    }

    else
    {
        // exclude 
        solve(str,ans,index+1,output);


        // include 
        char element=str[index];
        output.push_back(element);
        solve(str,ans,index+1,output);

    }
}

vector<string>subsequence(string str)
{
    vector<string>ans;
    string output="";
    int index=0;
    solve(str,ans,index,output);
    return ans;
}
int main(){
    cout<<"Enter the string"<<endl;
    string str;
    cin>>str;
    subsequence(str);
    return 0;
}
