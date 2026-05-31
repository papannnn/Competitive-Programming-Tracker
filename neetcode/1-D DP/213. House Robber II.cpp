class Solution {
public:
    int helper(vector<int> arr) {
        if (arr.size() == 1) {
            return arr[0];
        }

        vector<int> dp(arr.size());
        dp[0] = arr[0];
        dp[1] = max(arr[0], arr[1]);

        for (int i = 2; i < arr.size(); i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
        }

        return dp[arr.size() - 1];
    }

    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        return max(
            helper(vector<int>(nums.begin(), nums.end() - 1)),
            helper(vector<int>(nums.begin() + 1, nums.end()))
        );
    }
};
