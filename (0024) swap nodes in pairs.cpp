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
	ListNode* swapPairs(ListNode* head) {
		if (head == NULL || head->next == NULL) {
			return head;
		}

		ListNode* cur = head;
		ListNode* newHead = head->next;
		ListNode* next = NULL;

		while(cur != NULL && cur->next != NULL) {
			next = cur->next->next;
			cur->next->next = cur;
			cur->next = next != NULL
						? next->next != NULL
							? next->next
							: next 
						: NULL;
			cur = next;
		}

		return newHead;
	}
};

