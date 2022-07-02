class TrieNode {
public:
    map<char, TrieNode *> children;
    TrieNode() {};
    int addNode(string s)
    {
        if (s.size() == 0) {
            return 0;
        }
        if (children.count(s[s.size() - 1]) == 0) {
            TrieNode *node = new TrieNode();
            children[s[s.size() - 1]] = node;
        }
        return children[s[s.size() - 1]]->addNode(s.substr(0, s.size() - 1));
    }

    int calcRes(int depth)
    {
        if (children.size() == 0) {
            return depth + 1;
        }
        int res = 0;
        for (auto child : children) {
            res += child.second->calcRes(depth + 1);
        }
        return res;
    }
};

class Solution {
public:
    int minimumLengthEncoding(vector<string> &words)
    {
        TrieNode tree = TrieNode();
        for (int i = 0; i < words.size(); i++) {
            tree.addNode(words[i]);
        }
        return tree.calcRes(0);
    }
};