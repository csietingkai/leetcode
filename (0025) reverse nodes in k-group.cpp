/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* root, int k) {
        vector<int> v;
        ListNode* newRoot = new ListNode();
        ListNode* current = newRoot;
        int count = 0;
        while (root != nullptr) {
            count++;
            v.insert(v.begin(), root->val);
            if (count == k) {
                for (int i = 0; i < v.size(); i++) {
                    current->next = new ListNode(v[i]);
                    current = current->next;
                }
                count = 0;
                v.clear();
            }
            root = root->next;
        }
        reverse(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            current->next = new ListNode(v[i]);
            current = current->next;
        }
        return newRoot->next;
    }
};
