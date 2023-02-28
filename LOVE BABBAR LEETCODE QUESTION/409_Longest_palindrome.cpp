/*

409. Longest Palindrome
Easy
4.4K
267
Companies
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
Accepted
477.7K
Submissions
879.4K
Acceptance Rate
54.3%
Seen this question in a real interview before?
1/4


*/

// Approch 1

class Solution {
public:
    int longestPalindrome(string s) {
        int count=1;
        int i=0;
        int j=1;
        int n=s.size()-1;
        while(i<=n && j<=n)
        {
            if(n==1)
            {
                return count;
            }
            if(s[i]!=s[j])
            {
                j++;
                i++;
            }
            if(n==2 && s[i]==s[j])
            {
                return 2;
            }
            else
            {
                count=count+2;
                i=i+2;
                j=j+2;
            }
        }
        return count;   
    }
};


// Approch 2

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ans;
        for(auto ch : s)
        {
            ans[ch]++;
        }
        int res=0;
        bool odd_res=false;
        for(auto &c :ans)
        {
            if(c.second % 2==0)
            {
                res=res+c.second;
            }
            else
            {
                odd_res=true;
                res=res+c.second-1;
            }
        }
        if(odd_res) res++;
        return res;
    }
};
