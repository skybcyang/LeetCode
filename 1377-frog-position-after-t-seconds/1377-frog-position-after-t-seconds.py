class Solution:
    def frogPosition(self, n: int, edges: List[List[int]], t: int, target: int) -> float:
        ndict = {}
        for edge in edges:
            if edge[0] not in ndict:
                ndict[edge[0]] = []
            ndict[edge[0]].append(edge[1])
            
            if edge[1] not in ndict:
                ndict[edge[1]] = []
            ndict[edge[1]].append(edge[0])
        gdict = {}
        
        plist = [1]
        visited = []
        gdict[1] = 1.0
        i=0
        while i<t:
            print(plist)
            tmplist=[]
            for p in plist:
                if p in ndict:
                    flag = False
                    for n in ndict[p]:
                        if n not in visited:
                            flag = True
                            gdict[n] = gdict[p]*1.0/len([x for x in ndict[p] if x not in visited])
                            tmplist.append(n)
                    if flag:
                        gdict[p] = 0
                    visited.append(p)
                else:
                    tmplist.append(p)
            plist = tmplist
            i+=1
        print(gdict)
        if target in gdict:
            return gdict[target]
        else:
            return 0.0