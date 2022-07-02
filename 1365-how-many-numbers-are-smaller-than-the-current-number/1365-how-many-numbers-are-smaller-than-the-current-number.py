class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        tmp = nums.copy()
        tmp.sort()
        
        res = []
        for num in nums:
            res.append(tmp.index(num))
        return res