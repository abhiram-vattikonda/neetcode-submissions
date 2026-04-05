class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
                int n = numbers.size();
        int l = 0, r = n-1;

        while(l < r)
        {
            int p = numbers[l] + numbers[r];
            if (p == target)
                return {l + 1, r + 1};

            else if (p > target)
                r--;
            else
                l++;
        }

        return {};
    }
};
