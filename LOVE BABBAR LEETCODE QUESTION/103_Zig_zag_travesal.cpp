/*

103. Binary Tree Zigzag Level Order Traversal
Medium
9K
239
Companies
Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]
Example 2:

Input: root = [1]
Output: [[1]]
Example 3:

Input: root = []
Output: []
 

Constraints:

The number of nodes in the tree is in the range [0, 2000].
-100 <= Node.val <= 100




*/


APPROCH 1


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root == NULL)
        {
            return result;
        }

        queue<TreeNode*>ans;
        bool left_to_right=true;
        ans.push(root);

        while(!ans.empty())
        {
            
             int size=ans.size();
              vector<int>temp(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* node=ans.front();
                ans.pop();

                int index=(left_to_right) ? i:(size-1-i);

                temp[index]=node->val;

                if(node->left)
                {
                    ans.push(node->left);
                }
                if(node->right)
                {
                    ans.push(node->right);
                }


            }

            left_to_right=!left_to_right;
            result.push_back(temp);

        }
            return result;
    }
};


