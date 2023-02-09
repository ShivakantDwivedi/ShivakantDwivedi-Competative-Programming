/*
1108. Defanging an IP Address
Easy
1.5K
1.6K
Companies
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

 

Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
 

Constraints:

The given address is a valid IPv4 address.


*/


class Solution {
public:
    string defangIPaddr(string address) {
        int n=address.size();
        string ans;
       int i=0;
       while(i<n)
       {
           if(address[i]=='.')
           {
              ans=ans+"[.]"; // conacdenate ho rhi hai string yaaha pe matlabh peehe peeche lagta chala jaa rha hai ans ke 
               i++;
           }
           else
           { 
              ans=ans+address[i];  // yaha pe automatic index badta chala jaata hai ans ka tabhi to concadenate ho rha hai
               i++;
           }
       }
       return ans;
    }
};