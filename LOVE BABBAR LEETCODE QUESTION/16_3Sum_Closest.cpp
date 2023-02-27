/*
16. 3Sum Closest
Medium
8.7K
467
Companies
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.

 

Example 1:

Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
Example 2:

Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
 

Constraints:

3 <= nums.length <= 500
-1000 <= nums[i] <= 1000
-104 <= target <= 104
Accepted
997.3K
Submissions
2.2M
Acceptance Rate
45.8%
Seen this question in a real interview before?
1/4

*/


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
          int n=nums.size();
          sort(nums.begin(),nums.end());
          int diff=INT_MAX;
          int ans=0;
          for(int i=0;i<n;i++)
          {
              int first=nums[i];
              int start=i+1;
              int end=n-1;
              while(start < end)
              {
            if((first + nums[start] + nums[end])== target)
                  {
                      return target;
                  }
// yaha pe absolute value lena hai  target me se minus kr ke
                else if(abs(first + nums[start] + nums[end]-target) < diff)
                {
                    diff=abs(first + nums[start] + nums[end] -  target);
                    ans=first + nums[start] + nums[end];
                }

                if( (first + nums[start] + nums[end]) > target  )
                {
                    end--;
                }
                else
                {
                    start++;
                }
              }
          }
          return ans;  
    }
};