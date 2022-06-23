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
    bool hasPathSum(TreeNode* root, int sum) {
        if (root == nullptr) {
            return false;
        }
        queue<pair<TreeNode*, int>> que;
        que.push({root, sum});
        while (!que.empty()) {
            auto front = que.front();
            que.pop();
            if (!(front.first->left) && !(front.first->right)) {
                if (front.second == front.first->val) {
                    return true;
                }
            }
            if (front.first->left) {
                que.push({front.first->left, front.second - front.first->val});
            }
            if (front.first->right) {
                que.push({front.first->right, front.second - front.first->val});
            }
        }

        return false;
    }
};