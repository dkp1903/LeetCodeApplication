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
    void bstUtil(TreeNode* root,int &sum)
    {
        if(!root) return;
        bstUtil(root->right,sum);
        sum+=root->val;
        root->val=sum;
        bstUtil(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) 
    {
        int sum=0;
        bstUtil(root,sum);
        return root;
    }
};
