class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        if(A.size()<3) return 0; 
        int sum = 0;
        int dp = 0;
        for(int i=1; i<A.size()-1; i++){
            if(A[i]-A[i-1] == A[i+1]-A[i]){
                dp++;
                sum += dp;
            } else {
                dp = 0;
            }
        }
        return sum;
    }
};