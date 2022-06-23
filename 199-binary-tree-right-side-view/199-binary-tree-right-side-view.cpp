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
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr)return {};
        vector<int> res;
        queue<TreeNode*>tmp;
        tmp.push(root);
        while(tmp.size() != 0){
            int len = tmp.size();
            int val = 0;
            while(len>0){
                TreeNode* x = tmp.front();
                val = x->val;
                if(x->left != nullptr){
                    tmp.push(x->left);
                }
                if(x->right != nullptr){
                    tmp.push(x->right);
                }
                len--;
                tmp.pop();
            }
            res.push_back(val);
        }
        return res;
    }
};