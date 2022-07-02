class Solution {
public:
    int balancedStringSplit(string s) {
        if(s.size()==0) return 1;
        int lnum = 0, rnum = 0;
        int res = 0;
        int i = 0;
        while(i < s.size()){
            if(s[i] == 'L') lnum++;
            if(s[i] == 'R') rnum++;
            if(lnum == rnum){
                res++;
                lnum = 0;
                rnum = 0;
            }
            i++;
        }
        return res;
    }
};