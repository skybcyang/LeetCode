class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int left, right;
        int len = s.size();
        while(i<len){
            if(s[i] != ' '){
                left = i;
                while(i<len && s[i] != ' '){
                    i++;
                }
                right = i;
                reverse(s.begin()+left, s.begin()+right);
            }
            i++;
        }
        return s;
    }
};