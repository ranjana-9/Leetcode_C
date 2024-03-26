/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *p,*q;
    p=head;
    int flag=0;
    while(p->next!=NULL){
        p=p->next;
        flag++;
    }
    q=head;
    flag++;
    int start=(flag/2);
    for(int i=0;i<start;i++)
        q=q->next;
    return q;
}
