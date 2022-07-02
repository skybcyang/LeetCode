class Solution {
public:
    int subtractProductAndSum(int n) {
        int tmp;
        int sum = 0;
        int product = 1;
        while(n != 0){
            tmp = n%10;
            sum += tmp;
            product *= tmp;
            n /= 10;
        }
        return product - sum;
    }
};