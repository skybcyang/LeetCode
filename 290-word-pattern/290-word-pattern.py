class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        str_list = str.split(' ')
        if len(str_list) != len(pattern):
            return False

        ch_str_dict = {}
        str_ch_dict = {}
        for ch, sls in zip(pattern, str_list):
            if ch not in ch_str_dict and sls not in str_ch_dict:
                ch_str_dict[ch] = sls
                str_ch_dict[sls] = ch
            elif ch in ch_str_dict and sls in str_ch_dict:
                if ch_str_dict[ch] != sls or str_ch_dict[sls] != ch:
                    return False
            else:
                return False
        return True
