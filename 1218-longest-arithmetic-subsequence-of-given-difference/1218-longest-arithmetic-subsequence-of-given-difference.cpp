class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int maxres = 1;
        map<int, int> m;
        for(int i=0; i<arr.size(); i++){
            if(m.count(arr[i] - difference) == 1){
                m[arr[i]] = m[arr[i] - difference] + 1;
                maxres = max(m[arr[i]], maxres);
            }
            else{
                m[arr[i]]=1;
            }
        }
        return maxres;
    }
};