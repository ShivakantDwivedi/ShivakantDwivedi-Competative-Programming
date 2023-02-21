/*

9. Palindrome Number
Easy
8.8K
2.4K
Companies
Given an integer x, return true if x is a 
palindrome
, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
Accepted
2.9M
Submissions
5.5M
Acceptance Rate
53.4%
Seen this question in a real interview before?
1/4
Yes
No

*/



APPROCH 1

class Solution {
public:
    bool isPalindrome(int x) {
      string temp=to_string(x);
        int i=0;
        int j=temp.size()-1;
        while(i<=j)
        {
            if(temp[i]==temp[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};


 APPROCH 2

 vector<int>ans;
        int temp;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
        temp=x%10;
        ans.push_back(temp);
        x=x/10;
        }
        int i=0;
        int j=ans.size()-1;
        while(i<=j)
        {
            if(ans[i]==ans[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }
        }
        return true;

    }

