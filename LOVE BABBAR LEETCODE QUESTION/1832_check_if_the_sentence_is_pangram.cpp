/*
1832. Check if the Sentence Is Pangram
Easy
2.2K
49
Companies
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 

Constraints:

1 <= sentence.length <= 1000
sentence consists of lowercase English letters.
Accepted
214.1K
Submissions
256K
Acceptance Rate
83.6%

*/



class Solution {
public:
// panagram ek sentence store karane wala jiske andar saari alphabet character 
// ek baar aane cahea 
    bool checkIfPangram(string sentence) {
        unordered_set<char>ans(sentence.begin(),sentence.end());
        if(ans.size()==26)
        return true;
        else
        return false;
    }
};