class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int A[26][2] = {0};
        int res=0;
        
        for (int i=0; i<J.size(); i++){
            if(J[i]>='a'){
                A[J[i]-'a'][0] = 1;
            }else{
                A[J[i]-'A'][1] = 1;
            }
        }
        
        for (int i=0; i<S.size(); i++){
            if(S[i]>='a' && A[S[i]-'a'][0] == 1){
                res++;
            }
            else if (S[i]<'a' && A[S[i]-'A'][1] == 1) {
                res++;
            }
        }
        return res;
    }
};