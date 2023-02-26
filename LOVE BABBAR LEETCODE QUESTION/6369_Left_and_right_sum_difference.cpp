/*


6369. Left and Right Sum Differences
User Accepted:9086
User Tried:9235
Total Accepted:9288
Total Submissions:10037
Difficulty:Easy
Given a 0-indexed integer array nums, find a 0-indexed integer array answer where:

answer.length == nums.length.
answer[i] = |leftSum[i] - rightSum[i]|.
Where:

leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
Return the array answer.

 

Example 1:

Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation: The array leftSum is [0,10,14,22] and the array rightSum is [15,11,3,0].
The array answer is [|0 - 15|,|10 - 11|,|14 - 3|,|22 - 0|] = [15,1,11,22].
Example 2:

Input: nums = [1]
Output: [0]
Explanation: The array leftSum is [0] and the array rightSum is [0].
The array answer is [|0 - 0|] = [0].
 

Constraints:

1 <= nums.length <= 1000
1 <= nums[i] <= 105

*/


class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans1(n,0);
       // ans1[0]=0;
        for(int i=1;i<n;i++)
        {
            ans1[i]=ans1[i-1] + nums[i-1];
        }
        
        vector<int>ans2(n,0);
        for(int j=n-2;j>=0;j--)
        {
            ans2[j]=ans2[j+1] + nums[j+1];
        }
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
            temp[i] =ans1[i] - ans2[i] ;
        }
        for(int i=0;i<n;i++)
        {
            temp[i]= abs(temp[i]);
        }
        return temp;
        
    }
};