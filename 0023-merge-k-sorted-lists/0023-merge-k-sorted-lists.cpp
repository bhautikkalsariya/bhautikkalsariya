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
    ListNode* mergeKLists(vector<ListNode*>& head) {
        vector<int> arr;
        int n=head.size();
        ListNode* curr=new ListNode(0);
        for(int i=0;i<n;i++){
            ListNode* temp=head[i];
            while(temp!=NULL){
                arr.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(arr.begin(), arr.end());
        ListNode* io=curr;
        for(int val:arr){
            io->next=new ListNode(val);
            io=io->next;
        }

        return curr->next;
    }
};