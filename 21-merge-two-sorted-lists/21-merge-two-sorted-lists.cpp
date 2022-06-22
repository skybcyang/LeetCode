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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *ln = new ListNode(0);
        ListNode *pn = ln;
        while(l1!=NULL && l2!=NULL){
            if(l1->val<l2->val){
                pn->next = l1;
                pn = pn->next;
                l1 = l1->next;
            }
            else{
                pn->next = l2;
                pn = pn->next;
                l2 = l2->next;
            }
        }
        if(l1 != NULL){
            pn->next = l1;
        } else if(l2!=NULL){
            pn->next = l2;
        }
        return ln->next;
    }
};