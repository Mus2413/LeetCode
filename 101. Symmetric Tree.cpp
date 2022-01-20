\/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* t1,TreeNode*t2)
    {
        if(t1==NULL && t2==NULL)
            return true;
        if(t1==NULL && t2!=NULL)
            return false;
        if(t1!=NULL && t2==NULL)
            return false;
        if(t1->val==t2->val)
        {
            bool x=solve(t1->left,t2->right);
            bool y=solve(t1->right,t2->left);
            if(x && y)
                return true;
            else
                return false;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        if(root->left==NULL && root->right==NULL)
            return true;
        if(root->left==NULL && root->right!=NULL)
            return false;
        if(root->right==NULL && root->left!=NULL)
            return false;
        return solve(root->left,root->right);
    }
};