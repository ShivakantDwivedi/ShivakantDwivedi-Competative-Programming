/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

*/

class Solution {
    private:
    bool valid(char s)
    {
        if((s>='A' && s<='Z') || (s>='a' && s<='z')  || (s>='0' && s<='9'))
        return 1;
        else
        return 0;
    }

    char upper_case(char s)
    {
        if(s>='a' && s<='z')
        return s;

        else{
        char temp=s-'A'+'a';
        return temp;
        }
    }

    bool palindrome(string temp)
    {
        int n=temp.size();
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(temp[i]!=temp[j])
            return false;
            else
            i++;
            j--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        
        string temp=""; 
        for(int i=0;i<s.size();i++)
        {
            if(valid(s[i])) // yaha pe ek ek character ko send kare ge uppar fumction ke pass
            {
                temp.push_back(s[i]);
            }
        }

        // convert all the upper case character into lower case
        for (int i=0;i<temp.size();i++)
        {
            temp[i]=upper_case(temp[i]);
        }
        return palindrome(temp);

        
    }
};