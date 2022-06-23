class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, int>tmp;
        for(string s: strs){
            string tmps = s;
            sort(tmps.begin(), tmps.end());
            auto iter = tmp.find(tmps);
            if(iter == tmp.end()){
                tmp[tmps] = res.size();
                res.push_back(vector<string>());
            }
            res[tmp[tmps]].push_back(s);
        }
        return res;
    }
};