class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        map<int, int> nmap;
        vector<int> start;
        vector<int> end;
        for(vector<int> interval: intervals){
            start.push_back(interval[0]);
            end.push_back(interval[1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int i=0, j=0;
        int val = 0;
        int left = 0, right = 0;
        while(j<end.size()){
            if(i<start.size() && start[i]<=end[j]){
                if(val == 0){
                    left = start[i];
                }
                val++;
                i++;
            }else{
                val--;
                if(val == 0){
                    right = end[j];
                    res.push_back({left, right});
                }
                j++;
            }
        }
        
        return res;
    }
};