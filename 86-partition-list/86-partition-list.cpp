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
    ListNode* partition(ListNode* head, int x) {
        if (head == nullptr){
            return head;
        }
        ListNode* left = head;
        
        ListNode* l1 = new ListNode();
        ListNode* l2 = new ListNode();
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        
        while (left) {
            if (left->val < x) {
                p1->next = left;
                left = left->next;
                p1 = p1->next;
            }
            else {
                p2->next = left;
                left = left->next;
                p2 = p2->next;
            }
        }
        p1->next = l2->next;
        p2->next = nullptr;
        return l1->next;
    }
};