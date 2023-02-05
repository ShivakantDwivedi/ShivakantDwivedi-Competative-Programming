/*

Example 1:

Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]
Example 2:

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]
- ans = [1,3,2,1,1,3,2,1]


*/


#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
            int n=nums.size();
            nums.resize(2*n);
            for(int i=0;i<n;i++)
            {
                nums[i+n]=nums[i];
            }
            return nums;
    }

int main(){
    vector<int>nums;
    int size;
    cin>>size;
    int a;
    for(int i=0;i<size;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
   cout<< getConcatenation(nums)<<endl;
   
}