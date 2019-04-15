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
	void traversal_tree(TreeNode *node, map<int, int>& level_map, int current_level) {
		if (node == NULL) {
			return;
		}
		
		if (level_map.find(current_level) == level_map.end()) {
			level_map.insert(pair<int, int>(current_level, node->val));
		}
		
		traversal_tree(node->right, level_map, current_level+1);
		traversal_tree(node->left, level_map, current_level+1);
	}
	
	vector<int> rightSideView(TreeNode* root) {
		vector<int> result;
		map<int, int> level_max;
		traversal_tree(root, level_max, 0);
		for (map<int, int>::iterator it = level_max.begin(); it != level_max.end(); it++) {
			result.push_back(it->second);
		}
		return result;
	}
};

