class Solution {
public:
    int GetRestSize(int idx, vector<pair<char, int>> data)
    {
        int restSize = 0;
        for (int i = idx + 1; i < data.size(); ++i) {
            restSize += data[i].second;
        }
        return restSize;
    }

    string reorganizeString(string S)
    {
        std::map<char, int> chmap;
        int sum = 0;
        for (auto ch: S) {
            if(chmap.count(ch) == 0) {
                chmap[ch] = 0;
            }
            sum++;
            chmap[ch]++;
        }
        for(auto& [ch, num] : chmap) {
            if(num - 1 > sum - num) {
                return "";
            }
        }
        map<char, int> cnt;
        for (auto s : S) {
            cnt[s]++;
        }
        vector<pair<char, int>> sortCnt(cnt.begin(), cnt.end());
        if (sortCnt.size() <= 1) {
            return "";
        }
        sort(sortCnt.begin(), sortCnt.end(), [](auto& a, auto& b) { return a.second > b.second; });
        string re = S;
        int idx = 0;
        for (int i = 0; i < sortCnt.size(); ++i) {
            int tmp = GetRestSize(i, sortCnt);
                while (sortCnt[i].second--) {
                    re[idx] = sortCnt[i].first;
                    idx += 2;
                    if (idx >= S.size()) {
                        idx = 1;
                    }
                }
        }

        return re;
    }
};