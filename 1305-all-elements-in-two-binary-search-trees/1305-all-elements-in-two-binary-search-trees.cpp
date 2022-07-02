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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>vec1;
        vector<int>vec2;
        inorderVisit(root1, vec1);
        inorderVisit(root2, vec2);
        vector<int> res(vec1.size() + vec2.size());
        merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), res.begin());
        return res;
    }
    void inorderVisit(TreeNode* root, vector<int>& vec){
        if(root == nullptr) return;
        if(root->left){
            inorderVisit(root->left, vec);
        }
        vec.push_back(root->val);
        if(root->right){
            inorderVisit(root->right, vec);
        }
    }
};