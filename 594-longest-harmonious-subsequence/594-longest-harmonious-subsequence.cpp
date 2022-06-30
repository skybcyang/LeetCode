class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> m;
        int maxres = 0;
        
        for(int num: nums) m[num]++;
        
        for(auto a: m){
            if(m.count(a.first+1) == 1){
                maxres = max(maxres, a.second + m[a.first+1]);
            }
        }
        return maxres;
    }
};