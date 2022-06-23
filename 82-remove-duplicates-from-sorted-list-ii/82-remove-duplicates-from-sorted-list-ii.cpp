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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* pre = new ListNode();
        pre->next = head;
        ListNode* tmp = pre;
        while(tmp->next){
            if(tmp->next->next && tmp->next->val == tmp->next->next->val){
                ListNode* ttmp = tmp->next;
                while(ttmp->next && ttmp->val == ttmp->next->val){
                    ttmp = ttmp->next;
                }
                tmp->next = ttmp->next;
            }else{
                tmp=tmp->next;
            }
        }
        return pre->next;
    }
};