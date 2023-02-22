/*
169. Majority Element
Easy
13.8K
430
Companies
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?
Accepted
1.6M
Submissions
2.5M
Acceptance Rate
63.9%
Seen this question in a real interview before?
1/4


*/

Approch 1

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=n/2;
        return nums[ans];
    }
};

Approch 2

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
        int temp=nums[0];
        for(auto i:ans)
        {
            // ans[temp] yaha pe value fetch kr rha hai map ses
            if(i.second>ans[temp])
            {
                temp=i.first;
            }
        }
        return temp;
    }
};