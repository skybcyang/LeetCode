class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        const int mod = 1e9 + 7;
        const int n = nums1.size();

        int sumDiff = 0;
        vector<int> diffs(n, 0);
        for (int i = 0; i < n; ++i) {
            diffs[i] = abs(nums1[i] - nums2[i]);
            sumDiff = (sumDiff + diffs[i]) % mod;
        }

        sort(nums1.begin(), nums1.end());
    
        int diffMax = 0;
        for (int i = 0; i < n; ++i) {
            int diff = INT_MAX;
            int idx = lower_bound(nums1.begin(), nums1.end(), nums2[i]) - nums1.begin();

            if (idx < n) {
                diff = min(diff, abs(nums1[idx] - nums2[i]));
            }
            if (idx > 0) {
                diff = min(diff, abs(nums1[idx - 1] - nums2[i]));
            }

            if (diff != INT_MAX) {
                diffMax = max(diffMax, abs(diff - diffs[i]));
            }
        }

        return diffMax == INT_MAX ? sumDiff : (sumDiff + mod - diffMax % mod) % mod;
    }
};