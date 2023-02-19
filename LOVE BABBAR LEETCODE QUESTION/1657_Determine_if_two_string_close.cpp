/*
1657. Determine if Two Strings Are Close
Medium
2.1K
97
Companies
Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

 

Example 1:

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
Example 2:

Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
Example 3:

Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"
 

Constraints:

1 <= word1.length, word2.length <= 105
word1 and word2 contain only lowercase English letters.
Accepted
104.5K
Submissions
185.4K
Acceptance Rate
56.3%
Seen this question in a real interview before?
1/4
Yes
No



*/

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>temp;
        vector<int>temp2;
        map<char,int>ans;
        map<char,int >ans2;
        string s1="";
        string s2="";
        if(word1.size()!=word2.size())
        {
            return false;
        }
       for(int i=0;i<word1.size();i++)
       {
           ans[word1[i]]++;
           ans2[word2[i]]++;
       }
       for(auto it:ans)
       {
           s1=s1+it.first;
           temp.push_back(it.second);
       }
       for(auto it:ans2)
       {
           s2=s2+it.first;
           temp2.push_back(it.second);
       }
        sort(temp.begin(),temp.end());
        sort(temp2.begin(),temp2.end());

        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]!=temp2[i])
            return false;
        }
        if(s1==s2)
        return true;
        else
        return false;

    }
};