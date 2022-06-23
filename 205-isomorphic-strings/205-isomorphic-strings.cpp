class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        int i = 0;
        vector<int>svec;
        map<char, int>smap;
        for(char ch: s){
            if(smap.find(ch) == smap.end()){
                smap[ch] = i;
                i++;
            }
            svec.push_back(smap[ch]);
        }
        
        i = 0;
        vector<int>tvec;
        map<char, int>tmap;
        for(char ch: t){
            if(tmap.find(ch) == tmap.end()){
                tmap[ch] = i;
                i++;
            }
            tvec.push_back(tmap[ch]);
        }

        for(i =0; i<svec.size(); i++){
            if(svec[i] != tvec[i]){
                return false;
            }
        }
        return true;
    }
};