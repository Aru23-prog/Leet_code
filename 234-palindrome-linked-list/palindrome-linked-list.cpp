/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> t;
        ListNode *temp=head;
        while(temp!=nullptr){
            t.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<t.size()/2;i++){
            if(t[i]!=t[t.size()-1-i]){
                return false;
            }
        }
        return true;
    }
};