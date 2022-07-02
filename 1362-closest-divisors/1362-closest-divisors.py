class Solution:
    def closestDivisors(self, num: int) -> List[int]:
        res = []
        from math import sqrt
        for i in range(1, int(sqrt(num+1))+1):
            if i*(int((num+1)/i)) == num+1:
                if len(res)!=0:
                    if abs(res[1]-res[0]) > abs(i -(num+1)/i):
                        res = [i, (num+1)/i]
                else:
                    res = [i, (num+1)/i]
        for i in range(1, int(sqrt(num+2))+1):
            if i*(int((num+2)/i)) == num+2:
                if len(res)!=0:
                    if abs(res[1]-res[0]) > abs(i -(num+2)/i):
                        res = [i, (num+2)/i]
                else:
                    res = [i, (num+2)/i]
        return [int(res[0]), int(res[1])]