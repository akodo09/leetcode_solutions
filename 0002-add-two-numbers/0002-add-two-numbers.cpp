class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(l1!=NULL || l2!=NULL || carry!=0){
            int a=0,b=0;
            if(l1!=NULL){
                a=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                b=l2->val;
                l2=l2->next;
            }
            int sum=a+b+carry;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
        }
        return dummy->next;
    }
};