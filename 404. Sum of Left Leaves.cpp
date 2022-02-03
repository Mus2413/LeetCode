/**
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
     
    int helper(TreeNode *root)
    {
        if(root->left && root->left->left==nullptr && root->left->right==nullptr)
            return root->left->val;
        else return 0;
    }
    
     int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr)
            return 0;
        
        int sum=0;
        
        sum+=helper(root);
        
        sum+=sumOfLeftLeaves(root->left);
        sum+=sumOfLeftLeaves(root->right);
  
        return sum;
    }
   
};