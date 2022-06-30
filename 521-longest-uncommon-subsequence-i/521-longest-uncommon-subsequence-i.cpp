class Solution {
public:
    int findLUSlength(string a, string b) {
        int alen = a.size();
        int blen = b.size();
        return alen!=blen? max(a.length(),b.length()) : (a.compare(b)? alen:-1);
    }
};