/*

1539. Kth Missing Positive Number
Easy
4.7K
302
Companies
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.

 

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.
Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.
 

Constraints:

1 <= arr.length <= 1000
1 <= arr[i] <= 1000
1 <= k <= 1000
arr[i] < arr[j] for 1 <= i < j <= arr.length
 

Follow up:

Could you solve this problem in less than O(n) complexity?

Accepted
270.5K
Submissions
466.1K
Acceptance Rate
58.0%


*/


APPROCH 1



class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n=arr.size();
        vector<int>ans;
        int i=1;
        int start=arr[0];
        int end=arr[n-1];
        while( ans.size()==n  )
        {
            if(find (arr.begin(), arr.end(), i) == end)
            {
                ans.push_back(i);
            }
            i++;
        }
        int element;
        for(int i=0;i<ans.size();i++)
        {
            if(i==k-1)
            {
            element=ans[i];
            }
        }
        return element;


    }
};


APPROCH2


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n=arr.size();
        arr.push_back(822232);
        vector<int>temp;
        int pointer=0;
        int i=1;
        while(temp.size()<=k)
        {
            if(i==arr[pointer] && pointer!=n )
            {
                pointer++;
            }
            else
            {
                temp.push_back(i);
            }
            i++;
        }
        return temp[k-1];

    }
};