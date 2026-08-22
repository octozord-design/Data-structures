class Solution{
    public:
ListNode*mergeTwoLists(ListNode*list1,ListNode*list2){
   
   ListNode*temp=new ListNode;
   ListNode*A=list1;
   ListNode*B=list2;
   ListNode*x;
   temp->next=NULL;
   while(A!=NULL&& B!=NULL){
    if(A->val<=B->val){
        
        temp->next=A;
        
        temp=temp->next;
        A=A->next;

    }
    else{
        
        temp->next=B;
        temp=temp->next;
        B=B->next;
    }
   }
   if(A==NULL && B!= NULL){
    temp->next=B;
        }
    else if(B==NULL && A!=NULL){
        temp->next=A;
    }
    if(list1==NULL){
        return list2;
    }
    else if(list2==NULL){
        return list1;
    }
    
   else if(list1->val<=list2->val){
    x=list1;
   }
   else{
    x=list2;
   }
 return x;

}
};


