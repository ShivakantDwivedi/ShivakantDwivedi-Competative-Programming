/*

543. Diameter of Binary Tree
Easy
11K
684
Companies
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

 

Example 1:


Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
Example 2:

Input: root = [1,2]
Output: 1
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-100 <= Node.val <= 100
Accepted
1M
Submissions
1.8M
Acceptance Rate
56.7%
Seen this question in a real interview before?
1/4
Yes
No
Discussion (40)
Similar Questions
Related Topics
Copyright ©️ 2023 LeetCode All rights reserved




*/

APPRROCH 1


class Solution {
    private:
    int findMax(TreeNode *root, int & maxi){
        if(root  == 0)
        {
        return 0;
        }
       int lh=findMax(root->left,maxi);
       int  rh=findMax(root->right,maxi);
       maxi=max(maxi,lh+rh);
       return 1+max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        findMax(root,maxi);
        return maxi;
    }
};






