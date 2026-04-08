class Solution {
public:
    int trap(vector<int>& height) {
                int n = height.size();

        int l = 0, r = n - 1;
        int maxL = height[l], maxR = height[r];
        int count = 0;
        while(l < r)
        {
            if(height[l] <= height[r])
            {
                l++;
                int p = maxL - height[l];
                p > 0? count += p : count = count;
                maxL = max(maxL, height[l]);
            }
            else
            {
                r--;
                int p = maxR - height[r];
                p > 0? count += p : count = count;
                maxR = max(maxR, height[r]);
            }
        }

        return count;
    }
};
