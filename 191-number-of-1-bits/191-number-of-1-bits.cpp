class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i = 0, res = 0;
        while(i<32){
            if(1<<i & n){
                res++;
            }
            i++;
        }
        return res;
    }
};