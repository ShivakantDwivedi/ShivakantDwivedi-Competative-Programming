/*
1295. Find Numbers with Even Number of Digits
Easy
1.8K
109
Companies
Given an array nums of integers, return how many of them contain an even number of digits.

 

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.
Example 2:

Input: nums = [555,901,482,1771]
Output: 1 
Explanation: 
Only 1771 contains an even number of digits.
 

Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 105
Accepted
535.2K
Submissions
694.8K
Acceptance Rate
77.0%
Seen this question in a real interview before?
1/4
Yes
No


*/


class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int i=0;
        int ans;
        int temp;
        while(i<=nums.size()-1)
        {
            temp=0;
            while(nums[i]!=0)
            {
            ans=nums[i]%10;
            temp++;
            nums[i]=nums[i]/10;
            }
            if(temp % 2==0)
            {
                count++;
            }
            i++;
        }
        return count;
    }
};