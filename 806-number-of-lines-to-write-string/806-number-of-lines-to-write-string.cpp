class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int res=1, tmp=0;
        for(auto ch: S){
            tmp += widths[ch-'a'];
            if(tmp>100){
                res += 1;
                tmp = widths[ch-'a'];
            }
        }
        return {res, tmp};
    }
};