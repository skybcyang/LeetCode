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
    vector<string>res;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == nullptr){
            return res;
        }
        string tmp = "";
        tmp += to_string(root->val);
        if(root->left == nullptr && root->right == nullptr){
            res.push_back(tmp);
            return res;
        }
        if(root->left != nullptr){
            dfs(root->left, tmp);
        }
        if(root->right != nullptr){
            dfs(root->right, tmp);
        }
        return res;    
    }
    void dfs(TreeNode* root, string s){
        s += "->";
        s += to_string(root->val);
        if(root->left == nullptr && root->right == nullptr){
            res.push_back(s);
            return;
        }
        else{
            if(root->left != nullptr){
                dfs(root->left, s);
            }
            if(root->right != nullptr){
                dfs(root->right, s);
            }
        }
    }
};