class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int count1=0, count2 =0;
        ListNode * curr1 = headA, *curr2 = headB;
        while(curr1!=NULL){
            count1++;
            curr1= curr1->next;
        }
        while(curr2!=NULL){
            count2++;
            curr2 = curr2->next;
        }
        int diff = abs(count1-count2);
        curr1 = headA, curr2 = headB;
        if(count1>count2){
            while(diff--){
                curr1 = curr1->next;
            }
        }else{
            while(diff--){
                curr2 = curr2->next;
            }
        }

        while(curr1!=NULL && curr2!=NULL){
            if(curr1 == curr2)return curr1;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return NULL;
    }
};
