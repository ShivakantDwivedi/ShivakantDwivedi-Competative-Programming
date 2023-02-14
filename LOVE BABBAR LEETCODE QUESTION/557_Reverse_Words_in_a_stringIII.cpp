/*
557. Reverse Words in a String III
Easy
4.6K
221
Companies
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "God Ding"
Output: "doG gniD"
 

Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.
Accepted
655K
Submissions
800.4K
Acceptance Rate
81.8%

*/



class Solution {
public:
    string reverseWords(string s) {
        int i,j=0;
        while(i<s.size())
        {
            while(j<s.size() && s[j]!=' ')
            {
                j++;
            }
// reverse me (s.begin(),s.begin()+j) ye dono pointer ko denote kr rhe hai
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            j=i;
        }
        return s;
    }
};