class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        vector<int> f(n, 0), b(n, 0);

        f[0] = 0;
        for(int i = 1; i < n; i++)
        {
            f[i] = max(f[i-1],height[i-1]);
            // cout<< f[i] << " ";
        }
        cout<< "\n";

        b[n-1] = 0;
        for(int i = n -2; i >= 0; i--)
        {
            b[i] = max(b[i+1], height[i+1]);
            // cout<< b[i] << " ";
        }

        int count = 0;
        for(int i = 0; i < n; i++)
        {
            int v = min(f[i], b[i]) - height[i];
            if (v > 0)
                count += v;
        }

        
        return count;
    }
};
