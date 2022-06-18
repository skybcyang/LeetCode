class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        if(strs.size() == 1) return strs[0];
        string res = "";
        int i=0;
        while(i<strs[0].size()){
            char ch = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(strs[j][i] != ch){
                    return res;
                }
            }
            res += ch;
            i++;
        }
        return res;
    }
};