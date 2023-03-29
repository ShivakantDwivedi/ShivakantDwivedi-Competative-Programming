/*


2265. Count Nodes Equal to Average of Subtree
Medium
1.1K
23
Companies
Given the root of a binary tree, return the number of nodes where the value of the node is equal to the average of the values in its subtree.

Note:

The average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.
A subtree of root is a tree consisting of root and all of its descendants.
 

Example 1:


Input: root = [4,8,5,0,1,null,6]
Output: 5
Explanation: 
For the node with value 4: The average of its subtree is (4 + 8 + 5 + 0 + 1 + 6) / 6 = 24 / 6 = 4.
For the node with value 5: The average of its subtree is (5 + 6) / 2 = 11 / 2 = 5.
For the node with value 0: The average of its subtree is 0 / 1 = 0.
For the node with value 1: The average of its subtree is 1 / 1 = 1.
For the node with value 6: The average of its subtree is 6 / 1 = 6.
Example 2:


Input: root = [1]
Output: 1
Explanation: For the node with value 1: The average of its subtree is 1 / 1 = 1.
 

Constraints:

The number of nodes in the tree is in the range [1, 1000].
0 <= Node.val <= 1000
Accepted
38.2K
Submissions
44.9K
Acceptance Rate
85.2%





*/


Approch 1

class Solution {
    private:
    pair<int,int>f(TreeNode* root, int& curr)
    {
        if(root==NULL)
        {
            return {0,0};
        }
       auto lh= f(root->left,curr);
        auto rh=f(root->right,curr);

        int sum = lh.first+rh.first+root->val;
        int node= lh.second+rh.second+1;

        if(sum/node==root->val)
        {
            curr++;
        }
        return {sum,node};

    }
public:
    int averageOfSubtree(TreeNode* root) {
        int curr=0;
        f(root,curr);
        return curr;
    }
};