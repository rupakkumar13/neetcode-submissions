class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int n = stones.size();

        int sum = accumulate(stones.begin(), stones.end(), 0);
        int target = sum / 2;

        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

        for (int i = 1; i <= n; i++) {
            int stone = stones[i - 1];

            for (int j = 1; j <= target; j++) {

                dp[i][j] = dp[i - 1][j];

                if (stone <= j) {
                    dp[i][j] = max(
                        dp[i - 1][j - stone] + stone,
                        dp[i][j]
                    );
                }
            }
        }

        int best = dp[n][target];

        return sum - 2 * best;
    }
};