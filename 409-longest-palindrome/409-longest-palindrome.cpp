class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        for(char ch: s){
            if(m[ch]) m[ch]++;
            else m[ch] = 1;
        }
        
        int j=0;
        for(auto a: m){
            if(a.second%2 != 0) j++;
        }
        return min(s.size(), s.size() - j + 1);
    }
};