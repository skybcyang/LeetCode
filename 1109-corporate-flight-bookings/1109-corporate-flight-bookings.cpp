class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>res(n+1, 0);
        for(vector<int> booking: bookings){
            res[booking[0]-1]+=booking[2];
            res[booking[1]]-=booking[2];
        }
        for(int i=1; i<n; i++){
            res[i] += res[i-1];
        }
        res.pop_back();
        return res;
    }
};