/*

2413. Smallest Even Multiple
Easy
475
47
Companies
Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
 

Example 1:

Input: n = 5
Output: 10
Explanation: The smallest multiple of both 5 and 2 is 10.
Example 2:

Input: n = 6
Output: 6
Explanation: The smallest multiple of both 6 and 2 is 6. Note that a number is a multiple of itself.
 

Constraints:

1 <= n <= 150


*/

class Solution {
public:
    int smallestEvenMultiple(int n) {
            // ye LCM ki ttarah hai
        // agr vo 2 se poori tarah divid ho jaa rha hai to vo n return kare ka kyoki vo khud se divide ho rha hai
        if(n%2==0)
        return n;

        // agr vo divide nhi ho rha hai to vahi value return ho jai gi
        else
        {
            return n*2; 
        }
    }
};