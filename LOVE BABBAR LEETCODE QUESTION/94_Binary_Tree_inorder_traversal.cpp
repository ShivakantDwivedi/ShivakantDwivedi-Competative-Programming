/*


94. Binary Tree Inorder Traversal
Easy
11.1K
537
Companies
Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,3,2]
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
1.9M
Submissions
2.6M
Acceptance Rate
73.7%


*/

APPROCH 1

class Solution {

private:

vector<int>inorder(TreeNode*root , vector<int>&ans)
{
    if(root == NULL)
    return ans;
    
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
    return ans;
}

public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }
};


APPROCH 2

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        stack<TreeNode*>st;
        TreeNode* node=root;
        while(true)
        {
            if(node != NULL)
            {
                st.push(node);
                node=node->left;
            }
            else
            {
                if(st.empty()==true)
                {
                    break;
                }
                else
                {
                    node=st.top();
                    st.pop();
                    inorder.push_back(node->val);
                    node=node->right;
                }
            }
        }
        return inorder;
    }
};