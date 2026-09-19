class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int ans = 0;

        vector<int> visited(128, 0);

        for (int j = 0; j < n; j++) {

            while (visited[s[j]] == 1) {
                visited[s[i]] = 0;
                i++;
            }

            visited[s[j]] = 1;

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};