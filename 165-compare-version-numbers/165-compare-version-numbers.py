class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1 = list(map(int, version1.split('.')))
        v2 = list(map(int, version2.split('.')))
        if len(v1) > len(v2):
            while len(v1) != len(v2):
                v2.append(0)
        elif len(v1) < len(v2):
            while len(v1) != len(v2):
                v1.append(0)
        return 1 if v1>v2 else 0 if v1==v2 else -1