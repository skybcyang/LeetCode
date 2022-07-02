class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int dis1 = 0, dis2 = 0;
        int i = start;
        while(i != destination){
            dis1 += distance[i];
            i++;
            i = i % distance.size();
        }
        while(i != start){
            dis2 += distance[i];
            i++;
            i = i % distance.size();
        }
        return min(dis1, dis2);
    }
};