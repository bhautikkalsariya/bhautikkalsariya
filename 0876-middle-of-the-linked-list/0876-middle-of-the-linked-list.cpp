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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        int k=1;
        while(curr->next!=NULL){
            curr=curr->next;
            k++;
        }
        
        ListNode* temp=head;
        for(int i=1;i<=k/2;i++){
            temp=temp->next;
        }
        head=temp;
        return head;
    }
};