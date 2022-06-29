class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>tmp(26,0);
        for(auto ch : s){
            tmp[ch-'a']++;
        }
        for(auto ch : t){
            tmp[ch-'a']--;
        }
        int i = 0;
        while(tmp[i] == 0){
            i++;
        }
        return 'a' + i;
        
    }
};