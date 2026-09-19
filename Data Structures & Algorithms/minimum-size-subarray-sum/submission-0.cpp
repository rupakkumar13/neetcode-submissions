class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int j = 0;
        int sum = 0;

        for(int i = 0; i < n; i++) {
            int num = nums[i];
            sum = sum + num;

            while(sum >= target) {
                ans = min(ans, i - j + 1);
                sum = sum - nums[j];
                j++;
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};