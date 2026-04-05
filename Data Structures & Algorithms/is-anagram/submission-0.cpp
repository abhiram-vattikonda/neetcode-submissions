class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m, p;
        int n = s.size();

        if(s.size() != t.size()) return false;

        for (int i = 0; i < n; i++)
        {
            if (m.find(s[i]) != m.end())
            {
                m[s[i]] += 1;
            }
            else{
                m.insert({s[i], 1});
            }

            if (p.find(t[i]) != p.end())
            {
                p[t[i]] += 1;
            }
            else{
                p.insert({t[i], 1});
            }
        }


        return m == p;
    }
};
