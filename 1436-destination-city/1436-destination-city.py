class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        start_dic = []
        end_dic = []
        for path in paths:
            start_dic.append(path[0])
            end_dic.append(path[1])
        for pos in end_dic:
            if pos not in start_dic:
                return pos
        return ""