/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        string s1, s2;
        dfs(s, s1);
        dfs(t, s2);
        string s11, s22;
        dfs2(s, s11);
        dfs2(t, s22);
        if(s1.find(s2) != s1.npos && s11.find(s22) != s11.npos){
            return true;
        }
        return false;
    }
    void dfs(TreeNode* s,string& str){
        if(s == nullptr){
            str += "NULL";
            return;
        }
        dfs(s->left,str);
        str += to_string(s->val);
        str += ' ';
        dfs(s->right,str);
    }
    void dfs2(TreeNode* s,string& str){
        if(s == nullptr){
            str += "NULL";
            return;
        }
        str += to_string(s->val);
        str += ' ';
        dfs2(s->left,str);
        dfs2(s->right,str);
    }
};