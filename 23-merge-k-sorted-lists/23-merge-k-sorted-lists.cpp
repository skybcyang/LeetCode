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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> res;
        for(auto x: lists){
            while(x!=nullptr){
                res.push_back(x->val);
                x = x->next;
            }
        }
        sort(res.begin(), res.end());
        ListNode* head = new ListNode();
        ListNode* p = head;
        for(auto x : res){
            p->next = new ListNode(x);
            p = p->next;
        }
        return head->next;
    }
};