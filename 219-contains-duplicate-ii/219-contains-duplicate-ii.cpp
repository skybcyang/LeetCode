class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> nmap;
        for (int i=0; i<nums.size(); i++) {
            if (nmap.find(nums[i]) == nmap.end()) {
                vector<int> vec{i};
                nmap[nums[i]] = vec;
            }
            else {
                nmap[nums[i]].push_back(i);
            }
        }
        for (auto x: nmap) {
            for(int i=0;i<x.second.size()-1; i++){
                if (x.second[i+1]-x.second[i] <= k) {
                    return true;
                }
            }
        }
        return false;
    }
};