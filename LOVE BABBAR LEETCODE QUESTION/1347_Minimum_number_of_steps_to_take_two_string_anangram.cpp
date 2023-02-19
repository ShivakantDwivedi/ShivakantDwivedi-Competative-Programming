/*
1347. Minimum Number of Steps to Make Two Strings Anagram
Medium
1.7K
77
Companies
You are given two strings of the same length s and t. In one step you can choose any character of t and replace it with another character.

Return the minimum number of steps to make t an anagram of s.

An Anagram of a string is a string that contains the same characters with a different (or the same) ordering.

 

Example 1:

Input: s = "bab", t = "aba"
Output: 1
Explanation: Replace the first 'a' in t with b, t = "bba" which is anagram of s.
Example 2:

Input: s = "leetcode", t = "practice"
Output: 5
Explanation: Replace 'p', 'r', 'a', 'i' and 'c' from t with proper characters to make t anagram of s.
Example 3:

Input: s = "anagram", t = "mangaar"
Output: 0
Explanation: "anagram" and "mangaar" are anagrams. 
 

Constraints:

1 <= s.length <= 5 * 104
s.length == t.length
s and t consist of lowercase English letters only.
Accepted
123.6K
Submissions
159K
Acceptance Rate
77.7%



*/

class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>ans;
        for(int i=0;i<s.size();i++)
        {
            ans[s[i]]++;
        }
        for(int j=0;j<t.size();j++)
        {
            ans[t[j]]--;
        }
        int count=0;
       for(auto it:ans)
       {
          if(it.second>0)
          {
           count=count+it.second;
          }
       }
        return count;
    }
};
