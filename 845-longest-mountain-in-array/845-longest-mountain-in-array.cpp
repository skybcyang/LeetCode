class Solution {
public:
    int longestMountain(vector<int>& A) {
        int res = 0;
        int p,q,tmp;
        if (A.size() < 3)
            return 0;
        
        for (int i=1; i<A.size()-1; i++){
            if(A[i]>A[i-1] && A[i]>A[i+1]){
                cout<<i;
                p = i-1;
                q = i+1;
                tmp = 3;
                while(p>0 && A[p]>A[p-1]){
                    p--;
                    tmp++;
                }
                
                while(q<A.size()-1 && A[q]>A[q+1]){
                    q++;
                    tmp++;
                }
                if (tmp>res){
                    res = tmp;
                }
                i = q;
            }
        }
        return res;
    }
};