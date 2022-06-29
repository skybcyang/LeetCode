class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==0)return -1;
        
        vector<vector<int>> charr(26);
        for(int i=0; i<s.size(); i++){
            charr[s[i]-'a'].push_back(i);
        }
        int minindex = 0xfffffff;
        for(vector v : charr){
            if(v.size() == 1){
                if(v[0]<minindex){
                    minindex = v[0];
                }
            }
        }
        if(minindex == 0xfffffff)return -1;
        return minindex;
    }
};