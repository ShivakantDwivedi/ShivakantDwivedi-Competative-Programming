/*
977. Squares of a Sorted Array
Easy
7.3K
183
Companies
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.

*/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr;
        int n=nums.size()-1;
        for(int i=0;i<=n;i++)
        {
          arr.push_back(nums[i]*nums[i]);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};