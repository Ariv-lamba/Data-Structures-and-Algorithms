class Solution {
public:
    ListNode * reversell(ListNode * head){
        ListNode * prev = NULL , * curr = head, * nextt = NULL;
        while(curr!=NULL){
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
             curr = nextt;

        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL )return true;
        ListNode * slow = head , * fast = head , * temp = NULL;
        while(fast!=NULL && fast-> next != NULL){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        slow = reversell(slow);
        while(slow!= NULL && head!=NULL){
            if(slow->val != head->val)return false;
            slow = slow->next;
            head = head->next;
        }
        return true;
    }
};
