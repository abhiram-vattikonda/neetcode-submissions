class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res;
        deque<int> que;

        int r = 0, l = 0;
        while (r < n)
        {
            while (!que.empty() && nums[que.back()] < nums[r])
                que.pop_back();
            
            que.push_back(r);

            if(l > que.front())
            {    
                que.pop_front();
            }

            if (r + 1 >= k)
            {
                res.push_back(nums[que.front()]);
                l++;
            }
            r++;
        }

        return res;
    }
};
