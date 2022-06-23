class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        backtrace(candidates, output, 0,  target);
        return res;
    }
    void backtrace(vector<int>& candidates, vector<int>& inputVec, int start,int target) {
        for (int i = start; i < candidates.size(); i++) {
            if (target - candidates[i] == 0) {
                inputVec.push_back(candidates[i]);
                res.push_back(inputVec);
                inputVec.pop_back();
            }
            else if (target - candidates[i] > 0) {
                inputVec.push_back(candidates[i]);
                backtrace(candidates, inputVec, i, target - candidates[i]);
                inputVec.pop_back();
            }
        }
    }
};