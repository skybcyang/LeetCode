class Solution:
    def rankTeams(self, votes: List[str]) -> str:
        if len(votes) == 1:
            return votes[0]
    
        ch_dict = {}
        for s in votes:
            for i in range(len(s)):
                if s[i] not in ch_dict:
                    ch_dict[s[i]] = [0 for x in range(len(votes[0]))]
                ch_dict[s[i]][i] += 1
                
        tmp_list = sorted(ch_dict.items(), key=lambda d:(d[1], -(ord(d[0]))), reverse=True)
        return ''.join(x[0] for x in tmp_list)