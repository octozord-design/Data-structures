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
    ListNode* removeNthFromEnd(ListNode*& head, int n) {
        ListNode*dummy=new ListNode;
        dummy->val=0;
        dummy->next=head;
        ListNode*slow=dummy;
        ListNode*fast=dummy;
        if(head==NULL||head->next== NULL)return NULL;
        int i=0;
        while(i<n){
            fast=fast->next;
            i++;
        }
        while(fast->next!=0){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode*save=slow->next->next;
        delete slow->next;
        slow->next=save;
        return dummy->next;
    }
};



 