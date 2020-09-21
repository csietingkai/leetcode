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
	vector<vector<string>> printTree(TreeNode* root) {
		int level = getLevel(root);
		
		vector<vector<string>> result(level, vector<string>(pow(2, level)-1, ""));
		int middle = pow(2, level-1)-1;
		cout << middle << endl;
		travsal(root, 0, level-1, middle, result);
		
		return result;
	}
private:
	void travsal(TreeNode* node, int level, int maxLevel, int idx, vector<vector<string>>& result) {
		if (node == nullptr) {
			return;
		}
		result[level][idx] = std::to_string(node->val);
		
		travsal(node->left, level+1, maxLevel, idx-pow(2,maxLevel-level-1), result);
		travsal(node->right, level+1, maxLevel, idx+pow(2,maxLevel-level-1), result);
	}
	
	const int getLevel(TreeNode* root) {
		if (root == nullptr) {
			return 0;
		}
		return 1 + std::max(getLevel(root->left), getLevel(root->right));
	}
};

