class Solution {
public:
    string toLowerCase(string str) {
        string res = "";
        for(char ch : str){
            if(ch >='A' && ch <= 'Z'){
                res += ch - 'A' + 'a';
            }else{
                res += ch;
            }
        }
        return res;
    }
};