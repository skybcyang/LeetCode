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
// 本题采用广度优先搜索，采用队列记载当前的广度遍历的节点。
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        int leftVal = 0;
        while(nodeQueue.size()!=0){
            int queueLen = nodeQueue.size();
            leftVal = nodeQueue.front()->val;
            for(int i=0; i<queueLen; i++){
                TreeNode *tmp = nodeQueue.front();
                if(tmp->left!=NULL){
                    nodeQueue.push(tmp->left);
                }
                if(tmp->right!=NULL){
                    nodeQueue.push(tmp->right);
                }
                nodeQueue.pop();
            }
        }
        return leftVal;
    }
};