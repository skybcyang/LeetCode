class Solution {
public:
    string addStrings(string num1, string num2) {
        int cur = 0;
        string res = "";
        int i =num1.size()-1, j=num2.size()-1;
        while(i>=0 || j>=0 || cur!=0){
            if(i>=0){
                cur += num1[i]-'0';
                i--;
            }
            if(j>=0){
                cur += num2[j]-'0';
                j--;
            }
            res += to_string(cur%10);
            cur /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};