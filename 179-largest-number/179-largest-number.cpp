class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> numstrs(nums.size());
        transform(nums.begin(), nums.end(), numstrs.begin(), [](int x) {
            return to_string(x);
        });
        sort(numstrs.begin(), numstrs.end(), [&](const string& lhs, const string& rhs){
            return lhs+rhs > rhs+lhs;
        });
        if (numstrs[0][0] == '0') return "0";
        return accumulate(numstrs.begin(), numstrs.end(), string());
    }
};