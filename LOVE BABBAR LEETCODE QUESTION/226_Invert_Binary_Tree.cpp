/*

226. Invert Binary Tree
Easy
12K
169
Companies
Given the root of a binary tree, invert the tree, and return its root.

 

Example 1:


Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]
Example 2:


Input: root = [2,1,3]
Output: [2,3,1]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
Accepted
1.5M
Submissions
2M
Acceptance Rate
74.7%




*/


APPROCH 1

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode*temp=st.top();
            st.pop();
            if(temp!=NULL)
            {
                st.push(temp->left);
                st.push(temp->right);
                swap(temp->left,temp->right);
            }
        }
        return root;

APPROCH 2

    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr)
        {
            return root;
        }
        swap(root->left,root->right);
        invertTree(root->right);
        invertTree(root->left);

        return root;
    }