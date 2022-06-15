class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        string res="";
        int tmp=0;
        int tmpa=0,tmpb=0;

        for(int i=0; i<numRows; i++){
            if(i==0 || i==numRows-1){
                tmp=i;
                while(tmp<s.size()){
                    res+=s[tmp];
                    tmp+=2*(numRows-1);
                }
            }else{
                tmpa=i;
                tmpb=2*numRows-2-i;
                while(tmpa<s.size() || tmpb<s.size()){
                    res+=s[tmpa];
                    if(tmpb<s.size()){
                        res+=s[tmpb];
                    }
                    tmpa+=2*(numRows-1);
                    tmpb+=2*(numRows-1);
                }
            }
        }
        return res;
    }
};