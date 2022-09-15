/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
#include<stdlib.h>
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* lol =head;
    int i=0;
    int j=1;
    while(lol){
        lol=lol->next;
        i++;
    }
    if(i==1) return 0;
    j=i-n;
    lol=head;
    while(j--){
        lol=lol->next;
    }
    while(lol->next){
        lol->val=lol->next->val;
        lol=lol->next;
    }
    j=1;
    lol=head;
    while(j<i-1){
        j++;
        lol=lol->next;
    }
    lol->next=NULL;
    return head;
}
