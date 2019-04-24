/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    void traversal(vector<vector<int>>& result, Node* root, int level) {
        if (result.size()-1 >= level) {
            result[level].push_back(root->val);
        } else {
            vector<int> list = { root->val };
            result.push_back(list);
        }
        
        if (!root->children.empty()) {
            for (int i = 0; i < root->children.size(); i++) {
                traversal(result, root->children[i], level+1);
            }
        } else {
            return;
        }
    }
    
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result = {{}};
        if (root == NULL) {
            return {};
        }
        traversal(result, root, 0);
        return result;
    }
};
