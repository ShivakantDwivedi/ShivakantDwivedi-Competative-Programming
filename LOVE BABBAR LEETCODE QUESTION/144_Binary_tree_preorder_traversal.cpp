/*

144. Binary Tree Preorder Traversal
Easy
6.6K
173
Companies
Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,2,3]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100
 

Follow up: Recursive solution is trivial, could you do it iteratively?

Accepted
1.3M
Submissions
1.9M
Acceptance Rate
66.7%

*/

Approch 1


class Solution {
private:
    vector<int>preorder(TreeNode* root,vector<int>&ans)
    {
        if(root == NULL)
        {
        return ans;
        }
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
        return ans; 
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        preorder(root,ans);
        return ans ;
    }
}

