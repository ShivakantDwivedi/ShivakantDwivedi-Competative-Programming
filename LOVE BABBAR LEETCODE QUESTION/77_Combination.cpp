/*


77. Combinations
Medium
6K
185
Companies
Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.

 

Example 1:

Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.
Example 2:

Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.
 

Constraints:

1 <= n <= 20
1 <= k <= n
Accepted
660.8K
Submissions
985K
Acceptance Rate
67.1%

*/


class Solution {
public:
    void dfs(int n, int k, vector<int> vec, vector<vector<int>> & ans, int index)
    {
        if(k==0)
        {
            ans.push_back(vec);
        }

        for(int i= index+1;i<=n;i++)
        {
            vec.push_back(i);
            dfs(n,k-1,vec,ans,i);
            vec.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
      vector<int> vec;
      vector<vector<int>> ans;
      dfs(n,k,vec,ans,0);  
     return ans;
    }
};