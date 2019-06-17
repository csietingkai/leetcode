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
	vector<TreeNode*> generateTrees(int n) {
		vector<TreeNode*> result = {};
		if (n == 0) {
			return result;
		}
		
		return generate(1, n);
	}
	
	vector<TreeNode*> generate(int left, int right) {
		if (left > right) {
			return { NULL };
		}
		if (left == right) {
			return { new TreeNode(left) };
		}
		vector<TreeNode*> nodes = {};
		for (int i = left; i <= right; i++) {
			vector<TreeNode*> left_trees = generate(left, i-1);
			vector<TreeNode*> right_trees = generate(i+1, right);
			for (TreeNode *left_tree : left_trees) {
				for (TreeNode *right_tree : right_trees) {
					TreeNode *node = new TreeNode(i);
					node->left = left_tree;
					node->right = right_tree;
					nodes.push_back(node);
				}
			}
		}
		return nodes;
	}
};

