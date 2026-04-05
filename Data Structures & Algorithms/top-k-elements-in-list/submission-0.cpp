class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() < k)    return {};
       
        unordered_map<int, int> mp;
        vector<vector<int>> buckets(nums.size()+1);

        for (int i = 0; i < nums.size(); i++){

            mp[nums[i]] = 1 + mp[nums[i]]; 
        }

        for(auto m: mp){
            buckets[m.second].push_back(m.first);
        }

        vector<int> res;
        int i = nums.size() - 1;
        
        for (int i = buckets.size() - 1; i >= 0; i--)
        {
            for (int n: buckets[i])
            {
                res.push_back(n);
                k--;
                if(k==0)
                    return res;
            }
            
        }

        return res;

    }
};
