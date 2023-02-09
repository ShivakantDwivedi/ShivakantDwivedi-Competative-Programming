/*
189. Rotate Array
Medium
13K
1.5K
Companies
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?


*/


Approch1



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j=1;
        while(j<=k)
        {
        int n=nums.size()-1;
        int temp=nums[n];
        for(int i=n-1;i>=0;i--)
        {
            nums[i+1]=nums[i];
        }
        nums[0]=temp;
        j++;
        }
    }
};


Approch 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
    vector<int>temp(nums.size());
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k)%n]=nums[i];
        }
          nums=temp;
    }
};

