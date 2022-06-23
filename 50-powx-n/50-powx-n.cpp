class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        if(x == 1.0)return res;
        if(x == -1.0)return pow(-1,n%2);
        if(n>=0){
            while(n!=0 && res!=0.0){
                res *= x;
                n--;
            }
        }else{
            while(n!=0 && res!=0.0){
                res /= x;
                n++;
            }
        }
        return res;
    }
};