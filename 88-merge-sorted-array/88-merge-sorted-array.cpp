class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1, j = n-1;
        int curindex = m + n -1;
        while(i>=0 || j>=0){
            int tmp1 = -0x0fffffff;
            int tmp2 = -0x0fffffff;
            if(i >= 0) tmp1 = nums1[i];
            if(j >= 0) tmp2 = nums2[j];
            if (tmp1 >= tmp2){
                nums1[curindex] = nums1[i];
                i--;
            }
            else {
                nums1[curindex] = nums2[j];
                j--;
            }
            curindex--;
        }
    }
};