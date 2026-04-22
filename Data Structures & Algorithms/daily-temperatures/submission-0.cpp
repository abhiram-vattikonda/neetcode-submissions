class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> stack;
        vector<int> res(n, 0);

        for(int i = 0; i < n; i++)
        {
            while (!stack.empty() && temperatures[stack.back()] < temperatures[i])
            {
                int less = stack.back(); stack.pop_back();
                res[less] = i - less;
            }

            stack.push_back(i);
        }

        return res;
    }
};
