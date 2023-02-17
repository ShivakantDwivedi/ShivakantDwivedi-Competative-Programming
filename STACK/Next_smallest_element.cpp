/*


Detailed explanation ( Input/output format, Notes, Constraints, Images )
Sample Input 1:
2
4
2 1 4 3
3
1 3 2
Sample Output 1:
1 -1 3 -1
-1 2 -1
Explanation For Sample Input 1:
For the first test case : 
1) For ARR [1] = 2 ,  the next smaller element is 1. 
2) For ARR [2] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
3) For ARR [3] = 4 ,  the next smaller element is 3.
4) For ARR [4] = 3 ,  the next smaller element is -1 as no element exists in the right of it.
Hence, we will return the array [ 1, -1, 3, -1] in this case.

For the second test case :
1) For ARR [1] = 1 ,  the next smaller element is -1 as no element in the array has value smaller than 1.
2) For ARR [2] = 3 ,  the next smaller element is 2.
3) For ARR [3] = 2 ,  the next smaller element is -1 as no element exists in the right of it.
Hence we will return the array [ -1, 2, -1 ] in this case.
Sample Input 2:
2
4
1 2 3 4
2
5 0
Sample Output 2:
-1 -1 -1 -1
 0 -1

*/


#include <stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>s;
    vector<int>ans(n);
    s.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        int curr=arr[i];
        // eska matlabh hai ki s.top bada hai to chota element dekho
        while(s.top() >= curr)
        {
            s.pop();
        }
        // agr vo pahle se hi chota hai to sidha ans ke andat top store kara le
        // ge or curr element ko pop kr de ge
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}