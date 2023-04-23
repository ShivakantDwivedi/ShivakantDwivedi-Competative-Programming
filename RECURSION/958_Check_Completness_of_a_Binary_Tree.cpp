/*

958. Check Completeness of a Binary Tree
Medium
3.8K
52
Companies
Given the root of a binary tree, determine if it is a complete binary tree.

In a complete binary tree, every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible. It can have between 1 and 2h nodes inclusive at the last level h.

 

Example 1:


Input: root = [1,2,3,4,5,6]
Output: true
Explanation: Every level before the last is full (ie. levels with node-values {1} and {2, 3}), and all nodes in the last level ({4, 5, 6}) are as far left as possible.
Example 2:


Input: root = [1,2,3,4,5,null,7]
Output: false
Explanation: The node with value 7 isn't as far left as possible.
 

Constraints:

The number of nodes in the tree is in the range [1, 100].
1 <= Node.val <= 1000
Accepted
196.1K
Submissions
349K
Acceptance Rate
56.2%

*/



class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
//  So basically the idea is that once we have got null value in the queue then we should not get any non-null values. Because it would mean that somehwere left child was missing where as right child is present.
 
        queue<TreeNode*>q;
        q.push(root);
        bool ok=false;
        while(!q.empty())
        {
            TreeNode * curr=q.front();
              q.pop();
            if(curr==NULL)
            {
                ok= true;
            }
            else
            {
                q.push(curr->left);
                q.push(curr->right);
                if(ok)
                {
                    return false;
                }
            }
        }
        return true;
    }
};