/*

771. Jewels and Stones
Easy
4.3K
529
Companies
You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".

 

Example 1:

Input: jewels = "aA", stones = "aAAbbbb"
Output: 3
Example 2:

Input: jewels = "z", stones = "ZZ"
Output: 0
 

Constraints:

1 <= jewels.length, stones.length <= 50
jewels and stones consist of only English letters.
All the characters of jewels are unique.
Accepted
840.1K
Submissions
952.9K
Acceptance Rate
88.2%

*/


class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>visited;
       
// yaha pe pahale stones ko maap ke andar daal diya hai increment kr diya hai
        for(int j=0;j<stones.size();j++)
        {
            visited[stones[j]]++;
        }

//  yaha pe jewels wale ki map se value ko fetch kr rha hai
        int ans=0;
        for(int k=0;k<jewels.size();k++)
        {
            ans=ans+visited[jewels[k]];
        }
        return ans;
    }
};