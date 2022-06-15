class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 0)return "";
        
        int left=0, right=0;
        int maxlen = 1;
        int n = s.size();
        string res = s.substr(0, 1);
        for(int i=1; i<n-1; i++){
            if(s[i-1] == s[i+1]){
                left = i-2;
                right = i+2;
                while(left>=0 && right<n && s[left]==s[right]){
                    left--;
                    right++;
                }
                left++;
                right--;
                if(right - left + 1> maxlen){
                    res = s.substr(left, right - left + 1);
                    maxlen = right - left + 1;
                }
            }
        }
        
        for(int i=0; i<n-1; i++){
            if(s[i] == s[i+1]){
                left = i-1;
                right = i+2;
                while(left>=0 && right<n && s[left]==s[right]){
                    left--;
                    right++;
                }
                
                left++;
                right--;
                if(right - left + 1> maxlen){
                    res = s.substr(left, right - left + 1);
                    maxlen = right - left + 1;
                }
            }
        }
        return res;
    }
};