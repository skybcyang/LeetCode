/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root == NULL) return 0;
        if(root->children.size() == 0) return 1;
        
        int res = 0;
        for(Node* children: root->children){
            res = max(res, maxDepth(children));
        }
        
        return res + 1;
    }
};