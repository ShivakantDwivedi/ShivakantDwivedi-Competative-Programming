/*

20. Valid Parentheses
Easy
18.2K
1K
Companies
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
Accepted
3.1M
Submissions
7.6M
Acceptance Rate
40.3%


*/

class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        int x=s.size();
        for(int i=0;i<x;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                ans.push(s[i]);
            }
            else if (ans.empty())
             // ye edge case hai agr pahle ki closing bracket mil jaaaye tb vo not valid paraenthesis 
            {
                return false;
            }
            else if( (s[i]==')' && ans.top()=='(')
             ||( s[i]=='}' && ans.top()=='{') ||
             ( s[i]==']' && ans.top()=='['))
             {
                 ans.pop();
             }
            else
            {
       // agr koi or character mil jaaye to bhi false
                return false;
            }
        }
        if(ans.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
