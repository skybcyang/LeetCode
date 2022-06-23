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
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode* i = head;
        ListNode* j = head;
        while(i->next!=NULL and i->next->next!=NULL){
            i = i->next->next;
            j = j->next;
            if(i == j){
                return true;
            }
        }
        return false;
    }
};