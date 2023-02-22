/*

2404. Most Frequent Even Element
Easy
531
17
Companies
Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.

 

Example 1:

Input: nums = [0,1,2,2,4,4,1]
Output: 2
Explanation:
The even elements are 0, 2, and 4. Of these, 2 and 4 appear the most.
We return the smallest one, which is 2.
Example 2:

Input: nums = [4,4,4,9,2,4]
Output: 4
Explanation: 4 is the even element appears the most.
Example 3:

Input: nums = [29,47,21,41,13,37,25,7]
Output: -1
Explanation: There is no even element.
 

Constraints:

1 <= nums.length <= 2000
0 <= nums[i] <= 105
Accepted
43.7K
Submissions
85.3K
Acceptance Rate
51.3%
Seen this question in a real interview before?
1/4
Yes
No


*/




class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ans[nums[i]]++;
            }  
        }
        if(ans.size()==0)
        {
            return -1;
        }
        int max=nums[0];
        for(auto it:ans)
        {
            if(it.second>ans[max])
            {
                max=it.first;
            }

            // ye hai ki agr donno ki value equal ho gi
            // to min dekhna hai
            else if(it.second==ans[max])
            {
                max=min(max,it.first);
            }
        } 
        return max;  
    }
};