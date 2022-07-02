class Solution {
public:
    int numTeams(vector<int>& rating) {
        if(rating.size() < 3){
            return 0;
        }
        int res = 0;
        int i=0, j=0;
        int leftless=0, leftmore=0;
        int rightless=0, rightmore=0;
        for(int i=1; i<rating.size()-1; i++){
            leftless=0;
            rightless=0;
            leftmore=0;
            rightmore=0;
            for(j=0; j<i; j++){
                if(rating[j]<rating[i]){
                    leftless++;
                }
                if(rating[j]>rating[i]){
                    leftmore++;
                }
            }
            for(j=i+1; j<rating.size(); j++){
                if(rating[i]<rating[j]){
                    rightmore++;
                }
                if(rating[i]>rating[j]){
                    rightless++;
                }
            }
            res += leftmore*rightless + leftless*rightmore;
        }
        return res;
    }
};