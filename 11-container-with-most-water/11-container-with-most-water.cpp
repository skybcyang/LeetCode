class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        int mi=0;
        for(int i=0; i<height.size();i++){
            if(height[i]<=mi){
                continue;
            }
            mi = height[i];
            for(int j=height.size()-1; j>i;j--){
                res = max(min(height[i], height[j])*(j-i), res);
                if(height[j]>=height[i]){
                    break;
                }
            }
        }
        return res;
    }
};