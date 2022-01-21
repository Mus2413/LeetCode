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
    bool hasPathSum(TreeNode* root, int targetSum) {
        queue<pair<TreeNode*,int>>q;
       
        if(root==NULL )
            return false;
        q.push({root,root->val});
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            int sum=q.front().second;
            q.pop();
            if(sum==targetSum && temp->left==NULL && temp->right==NULL)
                return true;
            if(temp->left)
            {
                q.push({temp->left,temp->left->val + sum});
                
            }
            if(temp->right)
            {
                q.push({temp->right,temp->right->val + sum});
            }
        }
        return false;
    }
};