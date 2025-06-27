class Solution {
public:

     ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(a==NULL){
            return b;
        }
        if(b==NULL){
            return a;
        }
        ListNode * head, *tail;
        if(a->val < b->val){
            head = a;
            tail = a;
            a = a->next; 
        }else{
            head = b;
            tail = b;
            b = b->next;
        }

        // now start traversal
        while(a!=NULL && b!= NULL){
            if(a->val < b->val){
                tail->next = a;
                a = a->next;
                tail = tail->next;
            }else{
                tail->next = b;
                b = b->next;
                tail = tail->next;
            }
        }

        if(a!=NULL){
            tail->next = a;
        }else{
            tail->next = b;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)return head;
        ListNode * slow = head, * fast = head;
        ListNode * temp;
        while(fast!=NULL && fast->next!=NULL){
            temp = slow;
            fast= fast->next->next;
            slow = slow->next;
        }
        temp->next = NULL;

        ListNode * l1 = sortList(head);
        ListNode * l2 = sortList(slow);

        ListNode *ans = mergeTwoLists(l1, l2);
        return ans;

    }
};
