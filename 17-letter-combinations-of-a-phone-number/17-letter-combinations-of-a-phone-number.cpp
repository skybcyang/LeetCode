class Solution {
public:
    vector<vector<char>> chmap{
                            {'a', 'b', 'c'},
                            {'d', 'e', 'f'},
                            {'g', 'h', 'i'},
                            {'j', 'k', 'l'},
                            {'m', 'n', 'o'},
                            {'p', 'q', 'r', 's'},
                            {'t', 'u', 'v'},
                            {'w', 'x', 'y', 'z'}
                        };
    void GetString(vector<string>& res, string s, const string& digits, const int i) {
        if (i == digits.size()) {
            res.push_back(s);
            return;
        }
        for(auto ch: chmap[digits[i]-'2']){
            GetString(res, s+ch, digits, i+1);
        };
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.size() == 0){
            return res;
        }
        string s = "";
        GetString(res, s, digits, 0);
        return res;
    }
};