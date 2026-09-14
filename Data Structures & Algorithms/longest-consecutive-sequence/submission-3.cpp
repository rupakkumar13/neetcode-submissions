class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();
        if(n == 0) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;

        for(auto num : st){

            if(st.find(num - 1) == st.end()){

                int current = num;
                int length = 1;

                while(st.find(current + 1) != st.end()){
                    current++;
                    length++;
                }

                ans = max(ans, length);
            }
        }

        return ans;
    }
};