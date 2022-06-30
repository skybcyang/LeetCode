class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int size = s.size();
        vector<vector<int>> f(size,vector<int>(size,0));
        for(int i=0; i<size; i++){
            f[i][i] = 1;
        }
        for(int len=2; len<=size; len++){
            for(int i =0; i<size-len+1; i++){
                if(s[i] == s[i+len-1]){
                    f[i][i+len-1] = f[i+1][i+len-2]+2;
                } else {
                    f[i][i+len-1] = max(f[i][i+len-2], f[i+1][i+len-1]);
                }
            }
        }

        return f[0][size-1];
    }
};
