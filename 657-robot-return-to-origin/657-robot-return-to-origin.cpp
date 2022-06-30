class Solution {
public:
    bool judgeCircle(string moves) {
        int lr=0, ud=0;
        vector<int>vec(26, 0);
        for(char ch : moves){
            vec[ch-'A'] ++;
        }
        return (vec['R'-'A'] == vec['L'-'A']) &&(vec['U'-'A'] == vec['D'-'A']);
    }
};