class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        int i = 0;
        while(i < n - 2)
        {
            int l = i+1, r = n -1;

            while (l < r)
            {
                int target = 0 - nums[i];
                int num = nums[l] + nums[r];

                if (num == target)
                    res.insert({nums[i], nums[l++], nums[r]});

                else if(num < target)
                    l++;
                
                else
                    r--;
            }
            while(i < n-1 && nums[i] == nums[i+1])
                i++;
            i++;
        }

        return vector<vector<int>>(res.begin(), res.end());
    }
};
