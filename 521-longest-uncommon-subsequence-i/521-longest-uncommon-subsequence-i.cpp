class Solution {
public:
    int findLUSlength(string a, string b) {
        return a.size()!=b.size()? max(a.size(), b.size()) : (a.compare(b)? a.size() : -1);
    }
};