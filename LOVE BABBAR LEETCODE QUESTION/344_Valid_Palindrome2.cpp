/*
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

Example 1:

Input: s = "aba"
Output: true
Example 2:

Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:

Input: s = "abc"
Output: false
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
*/


class Solution {
public:
   bool is_palindrome(string s,int  start,int end)
    {
        while(start<end)
        {
            if(s[start]==s[end])
            {
               start++;
               end--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }


    bool validPalindrome(string s) {
        int i=0;
        int n=s.size()-1;
        while(i<n)
        {
            if(s[i]==s[n])
            {
                i++;
                n--;
            }

            // ye uske liye hai jb hai ek aage se character hatae ge  or ek picche se hattaye ge
            else
            {
                return (is_palindrome(s,i+1,n)) || (is_palindrome(s,i,n-1));
            }
        }
        return 1; 
    }  
};