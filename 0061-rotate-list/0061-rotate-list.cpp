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
    ListNode* rotateRight(ListNode* head, int n) {
        if(n==0){
            return head;
        }
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* curr=head;
        int k=1;
        while(curr->next!=NULL){
            curr=curr->next;
            k++;
        }
        n=n%k;
        for(int i=1;i<=n;i++){
        ListNode* temp=head;
        for(int i=0;i<k-2;i++){
            temp=temp->next;
        }
        ListNode* curr1=temp->next;
        curr1->next=head;
        temp->next=NULL;

        head=curr1;
        }
        return head;
    }
};