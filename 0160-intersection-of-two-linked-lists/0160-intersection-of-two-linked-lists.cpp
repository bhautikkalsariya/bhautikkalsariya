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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        int k1=1,k2=1;
        ListNode* t1=head1;
        ListNode* t2=head2;
        while(t1->next!=NULL){
            k1++;
            t1=t1->next;
        }
        while(t2->next!=NULL){
            k2++;
            t2=t2->next;
        }
        t1=head1;
        t2=head2;
        int d=abs(k1-k2);
        if(k1>=k2){
            for(int i=0;i<d;i++){
                t1=t1->next;
            }
        }
        else{
            for(int i=0;i<d;i++){
                t2=t2->next;
            }
        }
        while(t1!=NULL && t2!=NULL){
            if(t1==t2)return t1;
            else{
                t1=t1->next;
                t2=t2->next;
            }
        }
        return NULL;
    }
};