/*
Example 1:

Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
Example 2:

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
Example 3:

Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".
*/


#include  <iostream>
using namespace std;

    string removeOuterParentheses(string s) {

        string ans="";
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(count++)
                {
                    ans=ans+'(';
                }
            }
              else {
              if(--count) // matlabh ki pahle decrement karna tb value put karna
              {
                  ans=ans+')';
              } 
              }
        }
        return ans;            
       }
       int main(){

       }
