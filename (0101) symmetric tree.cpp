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
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (right == NULL && left == NULL) {
            return true;
        } else if (right == NULL || left == NULL) {
            return false;
        } else {
            if (right->val == left->val) {
                return isMirror(left->right, right->left) && isMirror(left->left, right->right);
            } else {
                return false;
            }
        }
    }
    
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }
};
