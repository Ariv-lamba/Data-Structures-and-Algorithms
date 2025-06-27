class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp = head;
        int count =0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        if(count < k)  return head;
        ListNode * curr = head , * prev = NULL, * nextt = NULL;
         count = 0;
        while(curr!= NULL && count <k){
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr= nextt;
            count ++;
        }
        if(curr!=NULL){
            ListNode * ok = reverseKGroup(curr, k);
             head->next = ok;
        }
        return prev;
    }
};
