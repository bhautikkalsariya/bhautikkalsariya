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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* a=l1;
        ListNode* b=l2;
        ListNode* curr=new ListNode(0);
        ListNode* temp=curr;

        while(a!=NULL && b!=NULL){
            if(a->val > b->val){
                temp->next=b;
                temp=temp->next;
                b=b->next;
            }else{
                temp->next=a;
                temp=temp->next;
                a=a->next;
            }
        }
        while(a!=NULL){
            temp->next=a;
                temp=temp->next;
                a=a->next;
        }
        while(b!=NULL){
            temp->next=b;
                temp=temp->next;
                b=b->next;
        }

        return curr->next;
    }
};