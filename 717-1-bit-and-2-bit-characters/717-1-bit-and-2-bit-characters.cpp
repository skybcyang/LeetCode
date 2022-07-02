class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int num1=0;
        for(int i=bits.size()-2; i>=0 && bits[i]==1; i--){
            num1++;
        }
        if(num1%2 == 0){
            return true;
        }
        return false;
    }
};