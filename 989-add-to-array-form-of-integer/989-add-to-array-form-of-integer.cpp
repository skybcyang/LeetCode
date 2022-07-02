class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int i = A.size()-1;
        int tmp = 0;
        int tmpsum = 0;
        while(K != 0 || i>=0 || tmp != 0){
            int a = i >= 0 ? A[i] : 0;
            tmpsum = tmp + K%10 + a;
            K = K/10;
            tmp = tmpsum/10;
            if(i>=0) A[i] = tmpsum % 10;
            else A.insert(A.begin(),tmpsum % 10);
            i--;
        }
        return A;
    }
};