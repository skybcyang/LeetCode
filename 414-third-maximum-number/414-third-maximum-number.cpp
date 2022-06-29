class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        vector<int> vec;
        vec.assign(st.begin(), st.end());
        if(vec.size()<3)return *max_element(vec.begin(), vec.end());
        sort(vec.begin(), vec.end(), greater<int>());
        return vec[2];
    }
};