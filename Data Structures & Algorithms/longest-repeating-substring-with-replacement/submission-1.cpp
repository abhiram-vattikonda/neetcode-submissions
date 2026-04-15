class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        map<char, int> mp;
        int res = 0, maxF = 0;
        int l = 0;
        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
            maxF = max(maxF, mp[s[i]]);
            
            while ((i - l + 1) - maxF > k)
            {
                mp[s[l]]--;
                l++;
            }

            res = max(res, i - l + 1);

        }

        return res;
    }
};
