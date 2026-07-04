/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> v;
        struct ListNode *tempB=headB;
        struct ListNode *tempA=headA;
        while(tempB!=nullptr){
            v.insert(tempB);
            tempB=tempB->next;}
            while(tempA!=nullptr){
            if(v.find(tempA)!=v.end()){
                return tempA;
            }
            tempA=tempA->next;
            
        }

        
        return nullptr;
    }
};