class Solution {
public:
    bool isHappy(int n) {
        set<int> rec;
        int sum = 0;
        while(n!=1 and rec.find(sum) == rec.end()){
            rec.insert(n);
            sum = 0;
            while(n){
                sum += pow(n%10, 2);
                n = n/10;
            }
            n=sum;
        }
        if(n == 1)return true;
        return false;
    }
};