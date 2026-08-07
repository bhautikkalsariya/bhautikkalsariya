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
        if (!head) return NULL;
        ListNode* temp=head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size()-1;i+=k){
           if(i+k<=arr.size()){
            reverse(arr.begin()+i,arr.begin()+i+k);
           }
        }
        ListNode* curr=new ListNode(arr[0]);
        ListNode* tem=curr;
        for(int i=1;i<arr.size();i++){
            tem->next=new ListNode(arr[i]);
            tem=tem->next;
        }

        return curr; 
    }
};