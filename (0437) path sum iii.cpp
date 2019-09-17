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
	int pathSum(TreeNode* root, int sum) {
		if (root == NULL) {
			return 0;
		}
		return traversal(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
	}
private:
	int traversal(TreeNode* node, int sum) {
		int res = 0;
		if (node == NULL) {
			return 0;
		}
		if (sum == node->val) {
			res++;
		}   
		res += traversal(node->left, sum - node->val);
		res += traversal(node->right, sum - node->val);
		return res;
	}
};

