class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res = 0;
        vector<int>tmp(heights.begin(), heights.end());
        sort(tmp.begin(), tmp.end());
        for(int i=0; i<tmp.size(); i++){
            if(tmp[i] != heights[i]){
                res++;
            }
        }
        return res;
    }
};