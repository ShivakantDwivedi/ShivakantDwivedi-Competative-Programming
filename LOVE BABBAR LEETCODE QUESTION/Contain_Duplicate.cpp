/*
217. Contains Duplicate
Easy
8.2K
1.1K
Companies
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

1 <= nums.length <= 105
-109 <= nums[i] <= 109

*/


Approch 1 O(n2)

class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
    for(int i=0;i<nums.size();i++)
    {
        int element=nums[i];
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]==element)
            {
                return true;
            }
        }
    }
    return false;
   }
};

Approch 2 O(nlogn)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                return true;
            }
        }
        return false;
        
    }
};