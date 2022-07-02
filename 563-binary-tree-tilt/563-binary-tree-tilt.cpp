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
    int findTilt(TreeNode* root) {
        int sum =0;
        if(root == NULL){
            return 0;
        }
        calcRes(root, sum);
        return sum;
    }
    int calcRes(TreeNode* node, int& sum){
        int leftval=0, rightval=0;
        if(node->left){
            leftval = calcRes(node->left, sum);
        }
        if(node->right){
            rightval = calcRes(node->right, sum);
        }
        sum+= abs(leftval- rightval);
        return node->val + leftval + rightval;
    }
};