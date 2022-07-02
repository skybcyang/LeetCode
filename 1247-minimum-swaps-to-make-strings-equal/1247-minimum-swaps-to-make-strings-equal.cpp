class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int xynum=0, yxnum=0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i] == 'x' and s2[i] == 'y'){
                xynum++;
            }
            if(s1[i] == 'y' and s2[i] == 'x'){
                yxnum++;
            }
        }
        if(xynum%2 == 0 && yxnum%2 == 0){
            return xynum/2 + yxnum/2;
        }
        else if(xynum%2 == 1 && yxnum%2 == 1){
            return xynum/2 + yxnum/2 + 2;
        }
        else{
            return -1;
        }
    }
};