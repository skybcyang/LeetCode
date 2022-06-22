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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pre = new ListNode(0);
        pre->next = head;
        ListNode* p = pre;
        ListNode* q = pre;
        for(int i=0; i<n; i++){
            p = p->next;
        }
        while(p->next){
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        
        return pre->next;
    }
};