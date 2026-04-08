class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int maxProfit = 0;
        int minVal = prices[0];

        for(int i = 1; i < n; i++)
        {
            if (prices[i] < minVal)
            {
                minVal = prices[i];
            }

            maxProfit = max(maxProfit, prices[i] - minVal);
        }
        return maxProfit;
    }
};
