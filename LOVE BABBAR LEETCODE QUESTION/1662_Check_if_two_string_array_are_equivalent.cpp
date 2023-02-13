/*
1662. Check If Two String Arrays are Equivalent
Easy
2K
171
Companies
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

 

Example 1:

Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
Example 2:

Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false
Example 3:

Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
 

Constraints:

1 <= word1.length, word2.length <= 103
1 <= word1[i].length, word2[i].length <= 103
1 <= sum(word1[i].length), sum(word2[i].length) <= 103
word1[i] and word2[i] consist of lowercase letters.
Accepted
259.3K
Submissions
311K
Acceptance Rate
83.4%

*/

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string temp1;
        string temp2;
        for(int i=0;i<n;i++)
        {
            temp1=temp1+word1[i];
        }
        for(int j=0;j<m;j++)
        {
            temp2=temp2+word2[j];
        }
        // ye relational operator khud hi check kr leta hai
        if(temp1==temp2)
        return true;
        else
        return false;
    }
};