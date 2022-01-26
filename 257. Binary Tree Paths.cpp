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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root==NULL)
            return ans;
        
        queue<pair<TreeNode*,string>>q;
        q.push({root,to_string(root->val)});
        while(!q.empty())
        {
            TreeNode* temp=q.front().first;
            string s=q.front().second;
            
            q.pop();
            if(temp->left == NULL && temp->right == NULL)
                ans.push_back(s);
            
            if(temp->left)
            {
                
                string x=s;
                x+=("->");
                x+=(to_string(temp->left->val));
                q.push({temp->left,x});
            }
            if(temp->right)
            {
                
                string x=s;
                x+=("->");
                x+=(to_string(temp->right->val));
                q.push({temp->right,x});
            }
        }
        return ans;
    }
    
};