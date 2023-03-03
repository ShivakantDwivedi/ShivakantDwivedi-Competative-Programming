/*

28. Find the Index of the First Occurrence in a String
Medium
2.5K
129
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.
Accepted
1.6M
Submissions
4.1M
Acceptance Rate
38.6%


*/


APPROCH 1

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i=0;
        int j=0;
        int count;
        while(i<n && j<m)
        {
            if(haystack[i] == needle[j])
            {
                count=i;
                break;
            }
        }
        int ans=count + n;
        for(int k=count , z=0 ; k<ans , z<m ; k++ , z++)
        {
           if(haystack[k] != needle[z])
           {
               return -1;
           }
        }
        return count;
    }
};


Approch 2


class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            for (; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) {
                return i;
            }
        }
        return -1;
    }
};

