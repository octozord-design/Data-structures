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
    ListNode*helper(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL ){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode*midnode;
    int recursion(ListNode*head){
        if(head->next==midnode)return head->val+midnode->val;
        int newval=recursion(head->next);
        midnode=midnode->next;
        int result=head->val+midnode->val;
        return(result>newval)? result : newval;
    }
    
    int pairSum(ListNode* head) {
    midnode=helper(head);
    return recursion(head);
    
    }
};