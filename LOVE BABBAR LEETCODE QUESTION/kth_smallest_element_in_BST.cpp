/*

230. Kth Smallest Element in a BST
Medium
9.5K
168
Companies
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

 

Example 1:


Input: root = [3,1,4,null,2], k = 1
Output: 1
Example 2:


Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3
 

Constraints:

The number of nodes in the tree is n.
1 <= k <= n <= 104
0 <= Node.val <= 104
 

Follow up: If the BST is modified often (i.e., we can do insert and delete operations) and you need to find the kth smallest frequently, how would you optimize?

Accepted
1.1M
Submissions
1.5M
Acceptance Rate
70.2%



*/

APPROCH 1
 
First do inorder and insert it into the vector and then use sort function to sort the vector

class Solution {
    private:
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL)
        {
            return 0;
        }
        vector<int>v;
        
        inorder(root,v);
        sort(v.begin(),v.end());

        return v[k-1];
        
    }
};
