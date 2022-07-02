class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int i=0,tmp =0;
        int bflag = false;
        if(A.size() < 3){
            return false;
        }
        
        while(i<A.size()-1 && A[i]<A[i+1]){
            i++;
        }
        
        if(i==0){
            return false;
        }
        
        tmp = i;
        
        while(i<A.size()-1 && A[i]>A[i+1]){
            i++;
        }
        
        if(i == tmp){
            return false;
        }
        
        if(i == A.size()-1){
            return true;
        } else {
            return false;
        }
    }
};