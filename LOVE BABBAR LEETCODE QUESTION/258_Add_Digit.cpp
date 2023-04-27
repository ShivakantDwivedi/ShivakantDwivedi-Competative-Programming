/*

258. Add Digits
Easy
3.8K
1.8K
Companies
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
 

Follow up: Could you do it without any loop/recursion in O(1) runtime?

Accepted
609.4K
Submissions
936K
Acceptance Rate
65.1%

*/


class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        while(num)
        {
            int temp=num%10;
             sum=sum+temp;
             num=num/10;
        }

        if(sum < 10)
        {
            return sum;
        }
        else
        {
           return addDigits(sum); // yaaha pe  jo output nikale ga vahi phir
            // evalute kare ge
        }
        
    }
};