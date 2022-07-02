class Solution:
    def numTimesAllBlue(self, light: List[int]) -> int:
        res = 0
        maxv = 0
        for i in range(0, len(light)):
            maxv = max(light[i], maxv)
            if maxv == i+1:
                res += 1
        return res