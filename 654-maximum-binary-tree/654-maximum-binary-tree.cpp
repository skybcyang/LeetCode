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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return construct(nums, 0, nums.end()-nums.begin());
    }
    TreeNode* construct(vector<int>& nums, int left, int right){
        if(left>=right){
            return nullptr;
        }
        auto x = max_element(nums.begin()+left, nums.begin()+right);
        TreeNode* tmp = new TreeNode(*x);
        tmp->left = construct(nums, left, x-nums.begin());
        tmp->right = construct(nums, x+1-nums.begin(), right);
        return tmp;
    }
};