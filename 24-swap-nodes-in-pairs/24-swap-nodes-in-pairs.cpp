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
    ListNode* swapPairs(ListNode* head) {
        if(head && head->next){
            ListNode* p = head;
            ListNode* q = head->next;
            head = q;
            p->next = swapPairs(q->next);
            q->next = p;
            return head;
        }
        return head;
    }
};