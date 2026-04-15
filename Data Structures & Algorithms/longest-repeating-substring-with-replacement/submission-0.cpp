class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        map<char, int> mp;
        int res = 0;
        int l = 0;
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;

            auto maxEle = max_element(mp.begin(), mp.end(), [](auto &a, auto &b){return a.second < b.second;});
            while ((i - l + 1) - maxEle->second > k)
            {
                mp[s[l]]--;
                l++;

                maxEle = max_element(mp.begin(), mp.end(), [](auto &a, auto &b){return a.second < b.second;});
            }

            res = max(res, i - l + 1);

        }

        return res;
    }
};
