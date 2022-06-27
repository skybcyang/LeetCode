// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(!isBadVersion(n))return n;
        long long l=1, r=n, tmp;
        while(l<=r){
            tmp = (l+r)/2;
            if(isBadVersion(tmp)){
                r = tmp-1;
            }
            else{
                l = tmp+1;
            }
        }
        return l;
    }
};