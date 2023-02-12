/*


14. Longest Common Prefix
Easy
12.6K
3.7K
Companies
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
Accepted
2.2M
Submissions
5.3M
Acceptance Rate
40.8%


*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(strs[0][i]!=strs[j][i])
                {
                    // yaha pe empty string apne aap hi aa jaati hai yaha pe ans="" ye likhne ki jarrorat nhi hai agr likho ge to output nhi aaye ga
                    return ans; 
                }
            }
            ans=ans+strs[0][i];
        }
        return ans;
        
    }
};