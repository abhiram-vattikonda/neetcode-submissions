class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;

        for(string str: strs)
        {
            vector<int> vas(26, 0);
            for(char c: str)
            {
                vas[c - 'a']++;
            }

            string key = to_string(vas[0]);
            for(int i = 1; i < 26; i++)
            {
                key += ',' + vas[i];
            }

            res[key].push_back(str); 
        }

        vector<vector<string>> result;
        for(auto key: res)
        {
            result.push_back(key.second);
        }

        return result;
    }
};
