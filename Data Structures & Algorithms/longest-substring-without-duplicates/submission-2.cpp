class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        vector<int> lastSeen(128, -1);
        int ans = 0;

        for (int j = 0; j < n; j++) {
            char ch = s[j];

            if (lastSeen[ch] >= i) {
                i = lastSeen[ch] + 1;
            }

            lastSeen[ch] = j;

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};
