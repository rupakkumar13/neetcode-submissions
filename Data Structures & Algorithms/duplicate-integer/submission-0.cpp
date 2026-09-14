class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>temp;
        for(int i = 0; i<n; i++){
            temp.insert(nums[i]);
        }  
        if(temp.size() == nums.size())
        return false;
        return true;
    }
};