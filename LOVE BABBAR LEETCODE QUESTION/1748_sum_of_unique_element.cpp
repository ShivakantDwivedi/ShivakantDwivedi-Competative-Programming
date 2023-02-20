/*
1748. Sum of Unique Elements
Easy
1.1K
24
Companies
You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.

 

Example 1:

Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.
Example 2:

Input: nums = [1,1,1,1,1]
Output: 0
Explanation: There are no unique elements, and the sum is 0.
Example 3:

Input: nums = [1,2,3,4,5]
Output: 15
Explanation: The unique elements are [1,2,3,4,5], and the sum is 15.
 

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
Accepted
108.1K
Submissions
142K
Acceptance Rate
76.1%




*/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
        int count=0;
        for(auto it :ans)
        {
            auto list = it.second;
            if(list==1)
            {
                count=count+it.first;
            }
        }
       return count;
    }
};
