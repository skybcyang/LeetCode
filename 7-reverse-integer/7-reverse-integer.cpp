class Solution {
public:
    int reverse(int x) {
        bool flag = false;
        long long tmpx = x;
        long long res = 0;
        if(tmpx<0) {
            flag = true;
            tmpx=-tmpx;
        }
        while(tmpx!=0){
            if((!flag && 2147483647-res*10 < tmpx%10)||(flag && 2147483648-res*10 < tmpx%10))
                return 0;
            res = res*10 + tmpx%10;
            tmpx = tmpx/10;
        }
        if(flag){
            res = -res;
        }
        return res;
    }
};