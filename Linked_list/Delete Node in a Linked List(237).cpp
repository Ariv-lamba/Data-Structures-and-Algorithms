class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * curr = node;
        ListNode * prev = NULL;
        while(curr->next != NULL){
            int temp = curr->val;
            curr->val = curr->next->val;
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete(curr);
        
    }
};
