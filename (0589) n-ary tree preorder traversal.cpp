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
    void traversal(vector<int>& result, Node* root, int level) {
        if (root == NULL) {
            return;
        }
        
        result.push_back(root->val);
        for (int i = 0; i < root->children.size(); i++) {
            traversal(result, root->children[i], level+1);
        }
    }
    
    vector<int> preorder(Node* root) {
        vector<int> result = {};
        if (root == NULL) {
            return {};
        }
        traversal(result, root, 0);
        return result;
    }
};
