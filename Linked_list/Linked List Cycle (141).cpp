  bool hasCycle(ListNode *head) {


         ListNode *slow = head, *fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        
        return false;
       /* ListNode * temp = NULL;
        ListNode * curr = head;
        ListNode * next = NULL ;
        if(head == NULL)return false;
        if(head->next == NULL)return false;
        if(head->next == head)return true;

        while(curr!= NULL){
            if(curr->next == temp){
                return true;
            }
            next = curr-> next;
            curr->next = temp;
            curr = next;
        }
        return false;
        */
    }
