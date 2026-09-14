class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        vector<int>ans;
        int n = nums.size();
        for(auto it : nums){
            mpp[it]++;
        }
        int f = n/3;
        for(auto it : mpp){
            if(it.second > f){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};