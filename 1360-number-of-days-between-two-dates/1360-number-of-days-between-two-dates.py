class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        from datetime import date
        x1, y1, z1 = date1.split('-')
        start = date(year=int(x1),month=int(y1),day=int(z1))
        
        x2, y2, z2 = date2.split('-')
        end = date(year=int(x2),month=int(y2),day=int(z2))
        return abs((end-start).days)