class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0;
        vector<int> charr(256, 0);
        int maxsize = 0;
        while(right< s.size()){
            while(right< s.size() && charr[s[right]] == 0){
                charr[s[right]]++;
                right++;
            }
            maxsize = max(maxsize, right - left);
            if(right == s.size()) break;
            while(charr[s[right]] == 1){
                charr[s[left]]--;
                left++;
            }
            charr[s[right]]++;
            right++;
        }
        return maxsize;
    }
};