class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int maxVol = 0;

        int l = 0, r = n - 1;

        while (l < r)
        {
            maxVol = max(maxVol, min(heights[l], heights[r]) * (r - l));

            if (l < n && heights[l] <= heights[r])
                l++;
            else if (r > 0 && heights[l] > heights[r])
                r--;
        }

        return maxVol;
    }
};
