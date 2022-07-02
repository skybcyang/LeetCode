class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        if(A.size() == 0){
            return A;
        }
        vector<int>::iterator left = A.begin();
        vector<int>::iterator right = A.end()-1;
        while(left<right){
            while(*left%2 == 0 && left < right){
                left++;
            }
            while(*right%2 == 1 && right > left){
                right--;
            }
            if(left < right){
                swap(*left, *right);
            }
        }
        return A;
    }
};