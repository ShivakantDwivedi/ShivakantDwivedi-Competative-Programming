/*

15. 3Sum
Medium
24.3K
2.2K
Companies
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105
Accepted
2.5M
Submissions
7.8M
Acceptance Rate
32.5


*/

Approch 1


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n<3 )
        {
            return {};
        }
        set<vector<int>>meraset;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
               meraset.insert({nums[i] , nums[j] , nums[k]});
                    }
                }
            }
        }
     //  ans;
      vector<vector<int>> ans(meraset.begin(),meraset.end());
        return ans;
    }
};


Approch 2

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<vector<int>>temp;
        int n=nums.size();
        for( int i=0; i<n ;i++)
        {
            int j=i+1;
            int  k=n-1;
            while(j<k)
            {
                int sum=nums[i] + nums[j] +nums[k];
                if(sum==target)
                {
                    ans.insert({nums[i] , nums[j] , nums[k]});
                    j++;
                    k--;
                }
                else if(sum < target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        for(auto it : ans)
            temp.push_back(it);
            return temp;
    }
};