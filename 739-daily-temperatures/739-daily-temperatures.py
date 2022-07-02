class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
        res = [0 for i in T]
        tdict = {}
        tset = set()
        for i, x in enumerate(T):
            removeed = []
            for tele in tset:
                if tele < x:
                    for tmp in tdict[tele]:
                        res[tmp] = i - tmp
                    tdict.pop(tele)
                    removeed.append(tele)
            for removes in removeed:
                tset.remove(removes)
            if x not in tdict:
                tdict[x] = []
                tset.add(x)
            tdict[x].append(i)
        return res
            
