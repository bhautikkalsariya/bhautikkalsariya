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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int k=1;
        while(curr->next!=NULL){
            curr=curr->next;
            k++;
        }
        n=k-n+1;
        if(n==1){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode* temp=head;
        for(int i=0;i<n-2;i++){
            temp=temp->next;
        }
        ListNode* op=temp->next;
        temp->next=op->next;
        delete op;
        return head;

    }
};