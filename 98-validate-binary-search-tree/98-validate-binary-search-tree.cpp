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
    bool isValidBST(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        vector<int> vec;
        inOrderVisit(root, vec);
        int i = 0;
        while(i<vec.size()-1){
            if(vec[i+1]<=vec[i]){
                return false;
            }
            i++;
        }
        return true;
    }
    void inOrderVisit(TreeNode* root, vector<int>& vec) {
        if(root == nullptr){
            return;
        }
        inOrderVisit(root->left, vec);
        vec.push_back(root->val);
        inOrderVisit(root->right, vec);
    }
};