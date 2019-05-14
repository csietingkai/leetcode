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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode *dummy = new ListNode(0);
		dummy->next = head;
		int length = 0;
		ListNode *current = dummy->next;
		while (current != NULL) {
			current = current->next;
			length++;
		}
		
		current = dummy;
		length -= n;
		while (length > 0) {
			length--;
			current = current->next;
		}
		
		current->next = current->next->next;
		
		return dummy->next;
	}
};

