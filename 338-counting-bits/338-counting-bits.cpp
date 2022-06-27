class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        for(int i=0; i<=num; i++){
            bitset<32>bs(i);
            res.push_back(bs.count());
        }
        return res;
    }
};