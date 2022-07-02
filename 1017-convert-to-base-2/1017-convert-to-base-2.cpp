class Solution {
public:
    string baseNeg2(int N) {
        if(N==0)
            return "0";
        string res = "";
        int a, b;
        char ch;
        while(N!=0){
            a = N%-2;
            b = N/-2;
            
            if (a<0){
                a += 2;
                b++;
            }
            ch = '0'+ a;
            res = ch + res;
            N = b;
        }
        return res;
    }
};