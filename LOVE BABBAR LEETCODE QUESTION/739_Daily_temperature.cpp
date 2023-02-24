/*
739. Daily Temperatures
Medium
10.2K
235
Companies
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

 

Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]
Example 2:

Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]
Example 3:

Input: temperatures = [30,60,90]
Output: [1,1,0]
 

Constraints:

1 <= temperatures.length <= 105
30 <= temperatures[i] <= 100
Accepted
579.9K
Submissions
874.4K
Acceptance Rate
66.3%


*/


APPROCH 1 o(n2)

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=i+1;j<n;j++)
            {
                if(temperatures[j]>temperatures[i])
                {
                    count++;
                    ans[i]=count;
                    break;
                }
                else if(temperatures[j]<temperatures[i])
                {
                    count++;
                }
                else 
                {
                    count++;
                }
            }
        }
        return ans;
    }
};



Approch 2

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n);
        int count=0;
        int i=0;
        int j=1;
        while(i<j && i<n && j<n)
        {
            if(temperatures[j] > temperatures[i])
            {
                count++;
                ans[i]=count;
                i++;
                j=i+1;
                count=0;
            }
            else if(temperatures[j] <= temperatures[i])
            {
                count++;
                j++;
            }
        }
        return ans;
    }
};


Approch 3

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
         int n=t.size();
        vector<int>ans(n,0);
        stack<int>temp;
        for(int i=0;i<n;i++)
        {
            while(!temp.empty() && t[temp.top()] < t[i])
            {
              ans[temp.top()]=i-temp.top();
              temp.pop();  
            }
            temp.push(i);
        }
        return ans;
    }
};