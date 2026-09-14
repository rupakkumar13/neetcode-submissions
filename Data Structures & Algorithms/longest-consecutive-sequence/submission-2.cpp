class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n = nums.size();
       int count = 1;
       int ans = 1;
       if(n == 0){
        return 0;
       }
       sort(nums.begin(), nums.end());
       for(int i = 0; i < n - 1; i++){
        if(nums[i] == nums[i + 1]){
            continue;
        }
        if(nums[i] + 1 == nums[i+1]){
            count++;
            ans = max(ans, count);
        }
        else{
            count = 1;
        }
       }
        return ans;
    }
};
