class Solution {
public:
     bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        if (!isBalanced(root->left) || !isBalanced(root->right)) {
            return false;
        }
        return abs(height(root->left) - height(root->right)) <= 1;
    }    
    int height(TreeNode* r) {
        return (r == nullptr) ? 0 : max(height(r->left), height(r->right)) + 1;
    }
};