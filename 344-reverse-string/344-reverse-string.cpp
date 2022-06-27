class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int left = 0, right = len-1;
        char tmp;
        while(left<right){
            tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            left++;
            right--;
        }
    }
};