/*
912. Sort an Array
Medium
3.3K
606
Companies
Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

 

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessairly unique.
 

Constraints:

1 <= nums.length <= 5 * 104
-5 * 104 <= nums[i] <= 5 * 104
Accepted
359.8K
Submissions
616.4K
Acceptance Rate
58.4%
*/

class Solution {

    private:

    void merge(vector<int>& nums, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int A[n1], B[n2];
    
    for(int i = 0; i < n1; i++)
        A[i] = nums[l + i];
    
    for(int i = 0; i < n2; i++)
        B[i] = nums[m + 1 + i];
    
    int i = 0, j = 0;
    int k = l;
    
    while(i < n1 && j < n2)
    {
        if(A[i] <= B[j])
            nums[k++] = A[i++];
        else
            nums[k++] = B[j++];
    }
    
    while(i < n1)
        nums[k++] = A[i++];
    while(j < n2)
        nums[k++] = B[j++];
}

void mergeSort(vector<int>& nums, int l, int r)
{
    if(l >= r)  
        return;
    
    int m = l + (r - l)/2;
    mergeSort(nums, l, m);
    mergeSort(nums, m + 1, r);
    merge(nums, l, m, r);
}
public:
    vector<int> sortArray(vector<int>& nums) {
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
}  
};


