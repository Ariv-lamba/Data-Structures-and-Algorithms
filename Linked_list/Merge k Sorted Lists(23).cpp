class Solution {
public:
    ListNode * merge2ll( ListNode * a, ListNode * b){
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n== 0)return NULL;
        ListNode * final = lists[0];
        for(int i = 1; i<n; i++){
            final = merge2ll(final , lists[i]);
        }
        return final;
    }
};
