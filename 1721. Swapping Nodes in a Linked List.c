/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int all(struct ListNode* head, int k){
    struct ListNode* lol=head;
    int i=0;
    while(lol){
        lol=lol->next;
        i++;
    }
    return i;
}
    
int front(struct ListNode* head, int k){
    struct ListNode* lol=head;
    int i=1;
    while(i<k){
        lol=lol->next;
        i++;
    }
    return lol->val;
}

struct ListNode* swapNodes(struct ListNode* head, int k){
    int var;
    struct ListNode* lol=head;
    int i=1;
    int a=all(head,  k);
    int f=front(head,  k);
    int b=front(head,a-k+1);
    while(lol){
        if(i==k){
            lol->val=b;
        }
        if(i==a-k+1){
            lol->val=f;
        }
        lol=lol->next;
        i++;
    }
    return head;
}
