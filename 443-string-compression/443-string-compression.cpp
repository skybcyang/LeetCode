class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,k=0;
        char tmp = chars[0];
        int tmpnum = 0;
        for(; k<chars.size(); k++){
            if(chars[k] == tmp){
                tmpnum++;
            }else{
                chars[i] = tmp;
                i++;
                if(tmpnum > 1){
                    string tmps = to_string(tmpnum);
                    for(char s: tmps){
                        chars[i] = s;
                        i++;
                    }
                    tmpnum = 1;
                }
                tmp = chars[k];
            }
        }
        
        chars[i] = tmp;
        i++;
        if(tmpnum > 1){
            string tmps = to_string(tmpnum);
            for(char s: tmps){
                chars[i] = s;
                i++;
            }
            tmpnum = 1;
        }
        
        int length = chars.size();
        for(int j=i; j<length; j++){
            chars.pop_back();
        }
        
        return chars.size();
    }
};