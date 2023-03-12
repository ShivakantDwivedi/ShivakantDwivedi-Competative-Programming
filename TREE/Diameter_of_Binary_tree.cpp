/*

Diameter of a Binary Tree
MediumAccuracy: 47.37%Submissions: 208K+Points: 4
Participate in Monthly Hiring Challenge conducted by GeeksforGeeks !!  

The diameter of a tree (sometimes called the width) is the number of nodes on the longest path between two end nodes. The diagram below shows two trees each with diameter nine, the leaves that form the ends of the longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes). 



Example 1:

Input:
       1
     /  \
    2    3
Output: 3
Example 2:

Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4
Your Task:
You need to complete the function diameter() that takes root as parameter and returns the diameter.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 10000
1 <= Data of a node <= 1000




*/



APPROCH o(n2)


  class Solution {
  public:
  int height(struct Node* node){
        // code here 
        if(node==NULL)
        {
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;}
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)
        {
            return 0;
        }
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int op3=height(root->left)+height(root->right)+1;
        int ans=max(op1,max(op2,op3));
        return ans;
    }
};



APPROCH 2


pair<int,int> diameterfast(Node *root)
{

    // base case
    if(root == NULL)
    {
        pair<int,int>p=make_pair(0,0);
        return p;
    }


    pair<int,int>left=diameterfast(root->left);
    pair<int,int>right=diameterfast(root->right);

    int opt1=left.right;
    int opt2=right.first;

    int opt3=left.second + right.second + 1;

    pair<int,int >ans;
    ans.first=max(opt1,max(opt2,opt3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}

int diameter(node *root)
{
    return diameterfast(root).First;
}
    