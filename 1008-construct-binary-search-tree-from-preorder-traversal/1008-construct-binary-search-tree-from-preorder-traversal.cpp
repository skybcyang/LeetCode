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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return dfs(preorder, preorder.begin(), preorder.end());
    }
    TreeNode* dfs(vector<int>& preorder, const vector<int>::iterator& left, const vector<int>::iterator& right){
        if(left > right || left >= preorder.end()){
            return nullptr;
        }
        auto x = left;
        auto y = left + 1;
        TreeNode* node = new TreeNode(*x);
        if(right == left){
            return node;
        }
        while(y < preorder.end() && *y < *x) {
            y++;
        }
        node->left = dfs(preorder, x+1, y-1);
        node->right = dfs(preorder, y, right);
        return node;
    }
};