/*
326. Power of Three
Easy
2.5K
237
Companies
Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 

Example 1:

Input: n = 27
Output: true
Explanation: 27 = 33
Example 2:

Input: n = 0
Output: false
Explanation: There is no x where 3x = 0.
Example 3:

Input: n = -1
Output: false
Explanation: There is no x where 3x = (-1).
 

Constraints:

-231 <= n <= 231 - 1
 

Follow up: Could you solve it without loops/recursion?
Accepted
656.6K
Submissions
1.4M
Acceptance Rate
45.4%


*/

Approch 1 Iteraive 

class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<n;i++)
        {
            if(pow(3,i) == n)
            {
                return true;
            }
        }
        return false;
    }
};


Aprroch 2 Recursively

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n<1)
        return false;
        if(n==1)
        return true;
        while(n>1)
        {
            if(n%3==0)
            {
            n=n/3;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};