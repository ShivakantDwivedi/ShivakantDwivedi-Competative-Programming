/*

1456. Maximum Number of Vowels in a Substring of Given Length
Medium
2.2K
71
Companies
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
 

Constraints:

1 <= s.length <= 105
s consists of lowercase English letters.
1 <= k <= s.length





*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int start = 0;
        int end = 0;
        int ans = 0;  
        int temp = 0; 
        while(end < n){
            if(s[end]=='a' || s[end]=='e' ||s[end]=='i' || s[end]=='o' || s[end]=='u'){
               temp++;
           }
           if(end-start == k ){
               if(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u'){
                   temp--; 
               }
               start++;  
           }
           
           ans = max(ans, temp); 
           end++; 
        }
        return ans; // please upvote!!
    }
};
