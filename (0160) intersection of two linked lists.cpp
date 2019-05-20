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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if (headA == NULL || headB == NULL) {
			return NULL;
		}
		
		int sizeA = 0;
		ListNode *currentA = headA;
		while (currentA != NULL) {
			sizeA++;
			currentA = currentA->next;
		}
		int sizeB = 0;
		ListNode *currentB = headB;
		while (currentB != NULL) {
			sizeB++;
			currentB = currentB->next;
		}
		
		currentA = headA;
		currentB = headB;
		while (sizeA != sizeB) {
			if (sizeA > sizeB) {
				currentA = currentA->next;
				sizeA--;
			} else {
				currentB = currentB->next;
				sizeB--;
			}
		}
		
		while (currentA != NULL) {
			if (currentA == currentB) {
				return currentA;
			}
			currentA = currentA->next;
			currentB = currentB->next;
		}
		return NULL;
	}
};

