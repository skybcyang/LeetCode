class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.size() == 0)return 0;
        reverse(s.begin(), s.end());
        int i = 0, res = 0;
        while(i < s.size() && s[i] == ' '){
            i++;
        }
        while(i+res < s.size() && s[i+res] != ' '){
            res++;
        }
        return res;
    }
};