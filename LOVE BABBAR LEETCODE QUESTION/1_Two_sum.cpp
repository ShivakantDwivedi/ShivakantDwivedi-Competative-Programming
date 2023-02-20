/*

1. Two Sum
Easy
43.5K
1.4K
Companies
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
 

Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
Accepted
9M
Submissions
18.2M
Acceptance Rate
49.5%



*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int>ans;
        vector<int>temp;

        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.insert(i);
                    ans.insert(j);
                }
            }
        }
        for(auto it : ans)
        {
            temp.push_back(it);
        }
        return temp;
    }
};

APPROCH 2 with  the help of hash map 

 unordered_map<int,int>temp;
        for(int i=0;i<nums.size();i++)
        {
            
            if(temp.find(target-nums[i])!=temp.end())
            {  
                // temp[target-nums[i]] yaha se value return ho gi temp ki es key ki target-nums[i]  
                return {temp[target-nums[i]],i};
            }
            else
            {
                 temp[nums[i]]=i;
            }
        }
        return {};