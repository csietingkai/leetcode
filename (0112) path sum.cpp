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
	bool hasPathSum(TreeNode* root, int sum) {
		return traversal(root, 0, sum);
	}

private:
	bool traversal(TreeNode* node, int sum, const int target) {
		if (node != NULL) {
			sum += node->val;
			if (node->right == NULL && node->left == NULL) {
				return sum == target;
			} else if (node->right != NULL && node->left != NULL) {
				return traversal(node->right, sum, target) || traversal(node->left, sum, target);
			} else if (node->right != NULL) {
				return traversal(node->right, sum, target);
			} else if (node->left != NULL) {
				return traversal(node->left, sum, target);
			} else {
				return false;
			}
		} else {
			return false;
		}
	}
};

