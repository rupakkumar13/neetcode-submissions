class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(128, -1);

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];

            if (lastSeen[ch] >= left) {
                left = lastSeen[ch] + 1;
            }

            ans = max(ans, right - left + 1);
            lastSeen[ch] = right;

        }

        return ans;
    }
};