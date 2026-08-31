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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1)
            return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        while (true) {
            // Find the kth node
            ListNode* kth = prev;

            for (int i = 0; i < k; i++) {
                kth = kth->next;

                // Less than k nodes remaining
                if (kth == NULL)
                    return dummy.next;
            }

            // Save the next group
            ListNode* nextGroup = kth->next;

            // Reverse current group
            ListNode* curr = prev->next;
            ListNode* before = nextGroup;

            while (curr != nextGroup) {
                ListNode* next = curr->next;
                curr->next = before;
                before = curr;
                curr = next;
            }

            // Connect previous part to reversed group
            ListNode* oldStart = prev->next;
            prev->next = kth;

            // oldStart is now the tail of reversed group
            prev = oldStart;
        }
    
    }
};