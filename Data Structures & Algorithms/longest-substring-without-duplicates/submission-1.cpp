class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<int> chs;
        
        int l = 0;
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            while(chs.find(s[i]) != chs.end())
            {
                chs.erase(s[l]);
                l++;
            }
            chs.insert(s[i]);
            res = max(res, i - l + 1);
        }

        return res;
    }
};
