/*

1768. Merge Strings Alternately
Easy
1.5K
25
Companies
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
 

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.
Accepted
142.6K
Submissions
175K
Acceptance Rate
81.5%

*/

class Solution {

private:
void solve(string word1,string word2,string &ans)
{
    int n=word1.size();
    int m=word2.size();
    int i, j;

    for( i=0 , j=0;i<n && j<m;i++,j++)
    {
        ans=ans+word1[i];
        ans=ans+word2[i];
    }

    while(i<n)
    {
        ans=ans+word1[i];
        i++;
    }

    while(j<m)
    {
        ans=ans+word2[j];
        j++;
    }
    
}


public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        solve(word1,word2,ans);
        return ans;
    }
