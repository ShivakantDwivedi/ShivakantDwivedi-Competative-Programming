/*

107. Binary Tree Level Order Traversal II
Medium
4.2K
308
Companies
Given the root of a binary tree, return the bottom-up level order traversal of its nodes' values. (i.e., from left to right, level by level from leaf to root).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[15,7],[9,20],[3]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-1000 <= Node.val <= 1000
Accepted
572.4K
Submissions
935.2K
Acceptance Rate
61.2%




*/


class Solution {
public:
    vector<vector<int>>ans;

    void bfs(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }

        queue<TreeNode*>q;
    
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++)
            {
                TreeNode* fro=q.front();
                q.pop();
            
                v.push_back(fro->val);

                if(fro->left!=NULL)
                {
                    q.push(fro->left);
                }

                if(fro->right!=NULL)
                {
                    q.push(fro->right);
                }
            }
            ans.push_back(v);   
        }
    }


    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        bfs(root);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};