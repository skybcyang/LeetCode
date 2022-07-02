/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == target){
            return cloned;
        }
        TreeNode* tmp = nullptr;
        if(original->left != nullptr){
            tmp = getTargetCopy(original->left, cloned->left, target);
        }
        if(tmp != nullptr){
            return tmp;
        }
        if(original->right != nullptr){
            tmp = getTargetCopy(original->right, cloned->right, target);
        }
        return tmp;
    }
};