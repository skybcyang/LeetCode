class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> time(timePoints.size());
        for(int i=0; i<timePoints.size(); i++){
            time[i] = ((timePoints[i][0]-'0')*10 + timePoints[i][1]-'0')*60 + (timePoints[i][3]-'0')*10 + timePoints[i][4]-'0';
        }
        sort(time.begin(), time.end());
        int min = 1440 - time.back() + *time.begin();
        for(int i=0; i<time.size()-1; i++){
            if(time[i+1]-time[i]<min){
                min = time[i+1]-time[i];
            }
        }
        return min;
        
    }
};