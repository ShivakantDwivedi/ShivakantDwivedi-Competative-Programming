/*

1302. Deepest Leaves Sum
Medium
4.1K
108
Companies
Given the root of a binary tree, return the sum of values of its deepest leaves.
 

Example 1:


Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15
Example 2:

Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
Output: 19
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
1 <= Node.val <= 100
Accepted
269.4K
Submissions
310.9K
Acceptance Rate
86.7%



*/


APPROCH 1

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q1;
        q1.push(root);
        int count=0;
        while(!q1.empty())
        {
            int n=q1.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* newNode=q1.front();
                if(newNode->left!=NULL)
                {
                    q1.push(newNode->left);
                }
                if(newNode->right!=NULL)
                {
                    q1.push(newNode->right);
                }
                q1.pop();
            }
            count++;
        }


        queue<TreeNode*>q2;
        q2.push(root);
        int start=0;
        while(start<count-1)
        {
            int n=q2.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* newNode=q2.front();
                if(newNode->left!=NULL)
                {
                    q2.push(newNode->left);
                }
                if(newNode->right!=NULL)
                {
                    q2.push(newNode->right);
                }
                q2.pop();
            }
            start++;
        }


        int sum=0;
        while(!q2.empty())
        {
            TreeNode* cleanNode=q2.front();
            sum=sum+cleanNode->val;
            q2.pop();
        }
        return sum;
    }
};