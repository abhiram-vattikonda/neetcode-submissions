class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();

        if (m > n) return "";


        map<char, int> tmp;
        for(char c: t)
        {
            tmp[c]++;
        }
        // for(auto it: tmp)
        // {
        //     cout << it.first << " -> "<< it.second;
        // }
        // cout<<"\n";



        map<char, int> cmp;
        int l = 0;
        int need = tmp.size(), have  = 0;
        int resLen = INT_MAX;
        vector<int> res = {-1 , -1};

        for(int i = 0; i < n; i++)
        {
            char c = s[i];
            cmp[c]++;

            if (tmp[c] && cmp[c] == tmp[c])
                have++;

            while (have == need)
            {
                if (i - l + 1 < resLen)
                {
                    resLen = i - l + 1;
                    res = {l , i};
                }
                cmp[s[l]]--;

                if (tmp[s[l]] && cmp[s[l]] < tmp[s[l]])
                    have--;

                l++; 
            }
        }

        if (resLen == INT_MAX) return "";
        string fin = "";
        for(int i = res[0]; i <= res[1]; i++)
        {
            fin += s[i];
        }
        return fin;
    }
};
