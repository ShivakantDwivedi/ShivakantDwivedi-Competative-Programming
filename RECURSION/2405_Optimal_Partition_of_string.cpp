/*
2405. Optimal Partition of String
Medium
2K
74
Companies
Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.

Return the minimum number of substrings in such a partition.

Note that each character should belong to exactly one substring in a partition.

 

Example 1:

Input: s = "abacaba"
Output: 4
Explanation:
Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
It can be shown that 4 is the minimum number of substrings needed.
Example 2:

Input: s = "ssssss"
Output: 6
Explanation:
The only valid partition is ("s","s","s","s","s","s").
 

Constraints:

1 <= s.length <= 105
s consists of only English lowercase letters.
Accepted
110.9K
Submissions
138.4K
Acceptance Rate
80.1%

*/



class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>ans;
        int count=1;
        for(auto it:s)
        {
            if(ans.find(it)!=ans.end())
             // matlabh ki vo character present hai to hm clear kare ge or usme insert kare ge
          {
                ans.clear();

                count++;
                ans.insert(it);
            }
            else
            {
                ans.insert(it);
            }
        }
        return count;
    }
};