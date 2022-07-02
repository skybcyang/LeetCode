class Solution {
public:
    int gcd(int a, int b){
        return b == 0? a : gcd(b, a%b);
    }
    
    long long lcm(int a, int b){
        return (long long)b / gcd(a, b) * a;
    }
    
    int f(long long x, int a, int b, int c){
        return x / a + x / b + x / c - x / lcm(a, b) - x / lcm(a, c) - x / lcm(b, c) + x / lcm(lcm(a, b), c);
    }
    
    int nthUglyNumber(int n, int a, int b, int c) {
        int left = 0, right = 2 * 1000000000 + 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(f(mid, a, b, c) >= n){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};