/*Assignment -
Basic Problems on link list. 
Convert array to linked list 
Delete from head, tail , any position
Insert Elements at any position, head and tail.
Print Middle element of linked list 
Insert element in sorted linked list 
Print Nth element from back side of Linked list 
Remove Duplicate elements for Linked list 
Reverse of linked list 
*/


#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
    Node(int x, Node *y){
        data = x;
        next = y;
    }
};
Node * fun(vector <int>&ans){
    int n = ans.size();
    Node * head = new Node (ans[0]);
    Node * curr = head;
    for(int i =1; i<n; i++){
        Node * temp = new Node(ans[i]);
        curr-> next = temp;
        curr = temp;
    }
    return head;
}

void printll(Node * head){
    Node * curr = head;
    while(head!=NULL){
        cout << head->data <<" ";
        head = head->next;
    }
    
}



Node * dhead(Node * head){
    if( head == NULL || head->next ==NULL )return NULL;
    Node * curr = head;
    curr = curr->next;
    delete(head);
    return curr;
}

Node * dtail(Node * head){
    if(head ==NULL || head->next == NULL)return NULL;
    Node * curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

Node * dap(Node * head, int k){
    if(head==NULL)return NULL;
    if(k==1){
        Node * curr = head;
        curr = curr->next;
        delete(head);
        return curr;
    }
    int count = 0;
    Node * curr = head;
    Node * prev = NULL;
    while(curr!=NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}


// Insert at fix position 

Node * ihead(Node * head, int x){
    Node * temp = new Node(x);
    temp-> next = head;
    head = temp;
    return head;
}

Node * itail(Node * head , int x){
    Node * temp = new Node(x);
    if(head == NULL)return temp;
    Node * curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node * irp(Node * head, int pos, int x){
      Node * temp = new Node(x);
      if(pos == 0){
          temp->next = head;
          return temp;
      }
    if(head == NULL)return NULL;
    
    int count =0;
    Node * curr = head;
  
    while(curr!=NULL){
        count++;
        if(count == pos){
            temp->next = curr->next;
            curr->next = temp;
            break;
        }
        curr = curr->next;
    }
    return head;
}


void printmiddle(Node * head){
    if(head ==NULL)return;
    Node * slow = head, *fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
}

Node * sllvadd(Node * head, int x){
    Node * temp = new Node(x);
    if(head==NULL)return temp;
    if(x<head->data){
        temp->next = head;
        return temp;
    }
    Node * curr = head;
    while(curr->next != NULL && curr->next->data<x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

Node * nthfbackp(Node * head){
    if(head == NULL )return NULL;
    Node * curr = head;
    for(int i =0; i<n; i++){
        if(curr==NULL)return;
        curr = curr->next;
    }
    Node * bacck = head;
    while(curr!=NULL){
        bacck = backk->next;
        curr = curr->next;
    }
    cout << (bacck->data) << endl;
}

Node * ddfll(Node * head){
    if(head == NULL){
        return NULL;
    }
    
    while(curr!=NULL && curr->next != NULL){
        if(curr->data == curr ->next ->data){
            Node * temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }else{
            curr = curr->next;
        }
    }
}

Node * reversealinkedlist( Node * head){
    Node * curr = head;
    Node * prev = NULL;
    while(curr != NULL){
        Node * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    
}

int main() {
//   int n;
//   cin >> n;
    vector<int>ans = {1, 2, 3, 4, 5,6,7, 8};
    // for(int i =0; i<n; i++){
    //     cin >> ans[i];
    // }
    Node * head = fun(ans);
   /* printll(head);
    cout << endl;
    head = dhead(head);
    printll(head);
    cout << endl;
    head = dtail(head);
    printll(head);
    cout << endl;
    head = dap(head, 3);
    printll(head);
    cout << endl;
    head = ihead(head, 0);
    head = itail(head, 0);
    printll(head);
    cout <<endl;
    head = irp(head, 2, 111);
    printll(head);
    cout << endl;
    printmiddle(head);
*/
    return 0;
}
