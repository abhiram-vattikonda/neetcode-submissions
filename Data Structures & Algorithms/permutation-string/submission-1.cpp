class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sublen = s1.size();
        int n = s2.size();
        map<char, int> mp;
        for(char c: s1)
        {
            mp[c]++;
        }

        int l = 0;
        map<char, int> cp;

        for (int i = 0; i < n; i++)
        {
            cp[s2[i]]++;
            while (cp[s2[i]] > mp[s2[i]])
            {
                cp[s2[l]]--;
                l++;
            }
            int sum = 0;
            for(auto it: cp)
            {
                sum += it.second;
            }
            if (sum == sublen)  return true;
        }

        return false;
    }
};
