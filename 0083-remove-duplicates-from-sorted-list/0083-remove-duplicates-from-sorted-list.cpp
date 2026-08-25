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
    ListNode* deleteDuplicates(ListNode* &head) {
        if(head==NULL){
            return NULL;
        }
        
      ListNode*X=head;
      ListNode*temp=head->next;
      int node=1;
      while(temp!=NULL){
        if(head->val==temp->val){
            temp=head;
            int i=1;
            while(i<node){
                temp=temp->next;
                i++;
            }
            ListNode*save=temp->next->next;
            delete temp->next;
            temp->next=save;

        }
        else{
            node=node+1;
        }
        temp=temp->next;
      }
      if(head->next==NULL){
        return X;
      }
      else{
         deleteDuplicates(head->next);
         return X;
      }
    }

};
// you can simply do it by a concept like since this is a sorted list so the duplicate element is always adjacent to each other you didnt had to do this much in this problem 
