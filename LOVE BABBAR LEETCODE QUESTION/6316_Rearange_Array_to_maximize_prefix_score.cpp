/*

6316. Rearrange Array to Maximize Prefix Score
User Accepted:8754
User Tried:10564
Total Accepted:8985
Total Submissions:24746
Difficulty:Medium
You are given a 0-indexed integer array nums. You can rearrange the elements of nums to any order (including the given order).

Let prefix be the array containing the prefix sums of nums after rearranging it. In other words, prefix[i] is the sum of the elements from 0 to i in nums after rearranging it. The score of nums is the number of positive integers in the array prefix.

Return the maximum score you can achieve.

 

Example 1:

Input: nums = [2,-1,0,1,-3,3,-3]
Output: 6
Explanation: We can rearrange the array into nums = [2,3,1,-1,-3,0,-3].
prefix = [2,5,6,5,2,2,-1], so the score is 6.
It can be shown that 6 is the maximum score we can obtain.
Example 2:

Input: nums = [-2,-3,0]
Output: 0
Explanation: Any rearrangement of the array will result in a score of 0.
 

Constraints:

1 <= nums.length <= 105
-106 <= nums[i] <= 106




*/



class Solution {
public:
    int maxScore(vector<int>& nums) {
     
        
        sort(nums.begin(), nums.end(),greater<int>());
        int m=nums.size();
        vector<long long >ans(m);
        int count=0;
        ans[0]=nums[0];
        if(ans[0] > 0)
            count++;
        for(int i=1;i<m;i++)
        {
            ans[i]=ans[i-1] + nums[i];
            
            if(ans[i] > 0)
            {
                count++;
            }
        }
        
        return count;
        
        
        
        
        
    }
};

