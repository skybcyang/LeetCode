class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        return True if re.fullmatch(p, s) else False