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
        unordered_map<ListNode*,int> mp;
        ListNode *temp1=head1;
        while(temp1!=NULL){
            mp[temp1]++;
            temp1=temp1->next;
        }
        ListNode *temp2=head2;
        while(temp2!=NULL){
            if(mp.find(temp2) != mp.end())
                return temp2;
            temp2 = temp2->next;
        }
        return NULL;
    }
};