class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        int total = accumulate(nums.begin(), nums.end(), 0);

        if (abs(target) > total) return 0;
        if ((total + target) % 2 != 0) return 0;

        int search = (total + target) / 2;

        vector<vector<int>> dp(n + 1, vector<int>(search + 1, 0));

        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            int num = nums[i - 1];

            for (int j = 0; j <= search; j++) {

                // Don't take the current number
                dp[i][j] = dp[i - 1][j];

                // Take the current number
                if (num <= j) {
                    dp[i][j] += dp[i - 1][j - num];
                }
            }
        }

        return dp[n][search];
    }
};