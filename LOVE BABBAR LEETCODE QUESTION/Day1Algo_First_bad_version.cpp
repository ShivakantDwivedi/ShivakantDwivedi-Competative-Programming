/*
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

 

Example 1:

Input: n = 5, bad = 4
Output: 4
Explanation:
call isBadVersion(3) -> false
call isBadVersion(5) -> true
call isBadVersion(4) -> true
Then 4 is the first bad version.
Example 2:

Input: n = 1, bad = 1
Output: 1
 

Constraints:

1 <= bad <= n <= 231 - 1

*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1;
        int end=n;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(isBadVersion(mid)==true) //yaha pe agr vo bad version ho gaa to end =mid -1 ho jai ga kyooki hame pahle bad version cahea na
            {
                end=mid-1;
            }
            else // yaha agr bad version nhi ho ga mtlabh good version ho ga to aage badh jai ga start=mid+1
            {
                start=mid+1; 
            }
            mid=start+(end-start)/2;
        }
        return start;
    }
};