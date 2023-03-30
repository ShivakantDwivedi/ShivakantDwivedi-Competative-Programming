/*


102. Binary Tree Level Order Traversal
Medium
12.8K
253
Companies
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]
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
1.7M
Submissions
2.7M
Acceptance Rate
64.3%


*/


APPROCH 1


class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(q.size()) {
            int size = q.size();
            vector<int> vec;
            for(int i=0;i<size;i++) {
                TreeNode *node = q.front();
                q.pop();
                vec.push_back(node -> val);
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);
            }
            ans.push_back(vec);
        }
        return ans;
    }
};