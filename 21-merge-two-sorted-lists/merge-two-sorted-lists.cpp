/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 class Solution{
    public:
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    ListNode dummy(0);
    ListNode *temp=&dummy;
    while(list1!=nullptr && list2!=nullptr){
        if(list1->val<=list2->val){
            temp->next=list1;
            list1=list1->next;
        }
        else{
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;
    }
    if(list1!=nullptr){
        temp->next=list1;
    }
    else{
        temp->next=list2;
    }
    return dummy.next;
}
 };