class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;

        for (int n: nums)
        {
            if(m.find(n) == m.end())
            {
                m.insert({n, 1});
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};