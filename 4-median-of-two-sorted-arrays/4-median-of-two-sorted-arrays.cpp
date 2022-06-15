class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res = 0.0;
        int i=0,j=0;
        int cur=0;
        int target=0;
        int tmpa=0,tmpb=0;

        if(((nums1.size() + nums2.size()) % 2)==1){
            target = ((nums1.size() + nums2.size())/2);
            while(i<nums1.size() && j<nums2.size()){
                if(nums1[i] < nums2[j]){
                    if(cur==target){
                        return nums1[i];
                    }
                    i++;
                }
                else{
                    if(cur==target){
                        return nums2[j];
                    }
                    j++;
                }
                cur++;
            }
            while(i<nums1.size()){
                if(cur==target){
                    return nums1[i];
                }
                i++;
                cur++;
            }
            while(j<nums2.size()){
                if(cur==target){
                    return nums2[j];
                }
                j++;
                cur++;
            }
        }
        else{
            target = ((nums1.size() + nums2.size())/2);
            while(i<nums1.size() && j<nums2.size()){
                cur++;
                if(nums1[i] < nums2[j]){
                    if(cur==target){
                        if(i+1<nums1.size() && nums1[i+1]<nums2[j]){
                            return (nums1[i]+nums1[i+1])/2.0;
                        }
                        else{
                            return (nums1[i]+nums2[j])/2.0;
                        }
                    }
                    i++;
                }
                else{
                    if(cur==target){
                        if(j+1<nums2.size() && nums2[j+1]<nums1[i]){
                            return (nums2[j]+nums2[j+1])/2.0;
                        }
                        else{
                            return (nums2[j]+nums1[i])/2.0;
                        }
                    }
                    j++;
                }
            }
            while(i<nums1.size()){
                cur++;
                if(cur==target){
                    return (nums1[i]+nums1[i+1])/2.0;
                }
                i++;
            }
            while(j<nums2.size()){
                cur++;
                if(cur==target){
                    return (nums2[j]+nums2[j+1])/2.0;
                }
                j++;
            }
        }
        return 0.0;
    }
};