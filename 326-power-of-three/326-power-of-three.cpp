class Solution {
public:
    bool isPowerOfThree(int n) {
        int i=0; 
        vector<int> a= {1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,177147,1594323, 4782969, 14348907, 43046721, 129140163, 387420489, 1162261467};
        
        vector<int>::iterator it = find(a.begin(), a.end(), n);

        if (it != a.end())
            return true;
        else
            return false;
    }
};