class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res = 0;
        map<char, int>chmap;
        for(auto ch: chars){
            if(chmap.find(ch) == chmap.end()){
                chmap[ch] = 0;
            }
            chmap[ch] ++;
        }
        for(auto word:words){
            if(coveredByCharmap(word, chmap)){
                res += word.size();
            }
        }
        return res;
    }
    bool coveredByCharmap(const string& s, map<char, int>chmap){
        for(char ch: s){
            if(chmap.find(ch) == chmap.end()){
                return false;
            }
            if(chmap[ch] == 0){
                return false;
            }
            chmap[ch]--;
        }
        return true;
    }
};