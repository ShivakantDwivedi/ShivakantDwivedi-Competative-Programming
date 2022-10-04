/*

Sample Input 1 :
2
ninja
MoM
Sample Output 1 :
ajnin
MoM
Explanation Of Sample Input 1 :
For test case 1 we have, 

The reverse of “ninja” is “ajnin”.

So, we output “ajnin” ( without quotes ).

For test case 2 we have, 

The reverse of “MoM” is “MoM” as it is a palindrome.

So, we output “MoM”.
Sample Input 2 :
2
ggUM
Kzk
Sample Output 2 :
MUgg
kzK

*/

#include <iostream>
using namespace std;

string reverse(string &str)
{
      int s=0;
    int e=str.size()-1;
    while(s<=e)
    {
        swap(str[s++],str[e--]);
    }
    return str;
}


int main(){
    cout<<"Enter the name"<<endl;
    string str;
    cin>>str;
    string ans=reverse(str);
    for(int i=0;i<str.size();i++)
    {
        cout<<ans[i];
    }
    
}





















