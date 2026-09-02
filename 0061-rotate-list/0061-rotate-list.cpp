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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        ListNode*temp=head;
        ListNode*black=head;
        int node=1;
        while(temp->next!=NULL){
            temp=temp->next;
            node=node+1;
        }
        int n=node;
        temp->next=head;
        int rotation=n-(k%n);
        while(rotation>1){
        black=black->next;
        rotation=rotation-1;
        }
        ListNode*save=black->next;
        black->next=NULL;
        return save;
    }
};


