/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string str = "";
        while (head != NULL) {
            str += head->val ;
            head = head->next;
        }
        string str2 = str;
        reverse(str.begin(), str.end());
        return str.compare(str2) == 0;
    }
};
