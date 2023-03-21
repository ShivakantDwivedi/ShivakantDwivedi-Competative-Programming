/*

110. Balanced Binary Tree
Easy
8.6K
485
Companies
Given a binary tree, determine if it is 
height-balanced
.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 

Constraints:

The number of nodes in the tree is in the range [0, 5000].
-104 <= Node.val <= 104
Accepted
1.1M
Submissions
2.2M
Acceptance Rate
49.0%




*/


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight(root)!=-1;
    }

    int dfsHeight(TreeNode *root){
        if(root == NULL)
        return 0;

       int left= dfsHeight(root->left);
       if(left==-1) return -1;

        int right= dfsHeight(root->right);
       if(right==-1) return -1;

       if(abs(left-right ) >1 ) return -1;

       return max(left,right)+1;

       

    }