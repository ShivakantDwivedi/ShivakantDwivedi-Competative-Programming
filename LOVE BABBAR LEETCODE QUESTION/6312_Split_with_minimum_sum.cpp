/*

6312. Split With Minimum Sum
User Accepted:5761
User Tried:6493
Total Accepted:5827
Total Submissions:7697
Difficulty:Easy
Given a positive integer num, split it into two non-negative integers num1 and num2 such that:

The concatenation of num1 and num2 is a permutation of num.
In other words, the sum of the number of occurrences of each digit in num1 and num2 is equal to the number of occurrences of that digit in num.
num1 and num2 can contain leading zeros.
Return the minimum possible sum of num1 and num2.

Notes:

It is guaranteed that num does not contain any leading zeros.
The order of occurrence of the digits in num1 and num2 may differ from the order of occurrence of num.
 

Example 1:

Input: num = 4325
Output: 59
Explanation: We can split 4325 so that num1 is 24 and num2 is 35, giving a sum of 59. We can prove that 59 is indeed the minimal possible sum.
Example 2:

Input: num = 687
Output: 75
Explanation: We can split 687 so that num1 is 68 and num2 is 7, which would give an optimal sum of 75.
 

Constraints:

10 <= num <= 109

*/


class Solution {
public:
    int splitNum(int num) {
        string ans=to_string(num);
        sort(ans.begin(), ans.end());
        string temp1;
        string temp2;
        for(int i=0;i<ans.size();i++)
        {
            if(i % 2 == 0)
            {
                temp1=temp1+ans[i];
            }
            else
            {
                temp2=temp2+ans[i];
            }
        }
            int val=stoi(temp1) + stoi(temp2);
            return val;
        }
};