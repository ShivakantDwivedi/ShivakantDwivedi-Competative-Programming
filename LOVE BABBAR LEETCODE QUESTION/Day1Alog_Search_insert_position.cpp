/*

35. Search Insert Position
Easy
11.5K
526
Companies
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:
*/


class Solution {
public:
    int binary_search(vector<int>& nums,int start,int end,int target)
    {
        int temp;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target<nums[0])
            {
                return 0;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            else
            {
                temp=mid+1; // main logic yahai pe hai yaha pe temp = mid+1 store kara lena hai tb jisse pta chal paaye ki vo target vali value kaha pe inssert ho gi
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return temp;
    }

    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int ans=binary_search(nums,start,end,target);
        return ans;
        
    }
};