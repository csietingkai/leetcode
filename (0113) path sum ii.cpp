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
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		vector<vector<int>> result;
		vector<int> path;
		traversal(root, sum, path, result);
		return result;
	}
private:
	void traversal(TreeNode* node, const int target, vector<int>& path, vector<vector<int>>& result) {
		if (node != NULL) {
			path.push_back(node->val);
			if (node->right == NULL && node->left == NULL && target == node->val) {
				result.push_back(path);
			}
			if (node->left != NULL) {
				traversal(node->left, target-node->val, path, result);
			}
			if (node->right != NULL) {
				traversal(node->right, target-node->val, path, result);
			}
			path.pop_back();
		} else {
			return;
		}
	}
};

