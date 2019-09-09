/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
class Solution {
public:
    void summer(TreeNode* root,int &sum)
    {
        //Base condition: Without this, the code would go into infinite recursion
        if(!root) 
           return;
        summer(root->right,sum);
        sum+=root->val;
        root->val=sum;
        summer(root->left,sum);
    }
    //Initialiser function, which initialises sum and returns the updated tree.
    TreeNode* bstToGst(TreeNode* root) 
    {
        int sum=0;
        summer(root,sum);
        return root;
    }
};
