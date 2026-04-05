class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         if (nums.size() <= 1) return {};
        int n = nums.size();
        vector<int> front(n,1), back(n, 1);

        int pro = 1;
        for(int i = 0; i < n; i++)
        {
            pro *= nums[i];
            front[i] = pro;
            cout<< front[i] << " ";
        }
        cout<< "\n";
        pro = 1;
        for(int i = n-1; i >= 0; i--)
        {
            pro *= nums[i];
            back[i] = pro;
            cout<< back[i]<< " ";
        }
        cout<< "\n";
        vector<int> ans(n);
        for(int i = 0; i < n; i++)
        {
            if (i-1 >= 0 && i + 1 < n)
                ans[i] = front[i-1] * back[i+1];
            else if(i+1 >= n)
                ans[i] = front[i-1];
            else if(i-1 < 0)
                ans[i] = back[i+1];

            cout << ans[i]<< "\n";
        }

        return ans;
    }
};
