/*Example 1:

Input: s = "(1+(2*3)+((8)/4))+1" 
Output: 3
Explanation: Digit 8 is inside of 3 nested parentheses in the string.
Example 2:

Input: s = "(1)+((2))+(((3)))"
Output: 3

    esme check krna hai ki maximum value kya ho gi depth ki
 */


#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int res=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                res=max(res,++count);
            }
            if(s[i]==')')
            {
                count--;
            }
        }
        return res;

}
