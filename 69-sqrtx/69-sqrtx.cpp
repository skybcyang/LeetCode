class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)return x;
        int left = 0;
        int right = 46341;
        long tmp = 0;

        while(left < right){
            tmp = (left + right) / 2;
            if(tmp*tmp <= x && x < (tmp+1)*(tmp+1)){
                break;
            }else if((tmp+1)*(tmp+1) <= x){
                left = tmp;
            }else if(tmp*tmp > x){
                right = tmp;
            }
        }
        return tmp;
    }
};