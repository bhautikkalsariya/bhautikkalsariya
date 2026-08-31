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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*, pair<int,int>> mp;
        
        int k=0;
        ListNode* temp=head;
        while(temp!=NULL){
            if(mp.find(temp)!=mp.end()){
                cout<<"index "<<mp[temp].second;
                return temp;
            }
            mp[temp].first++;
            mp[temp].second=k;
            temp=temp->next;
            k++;
        
        }
        return NULL;
    }
};