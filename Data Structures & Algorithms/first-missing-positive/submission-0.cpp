class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int n = nums.size();
       set<int>st;
       for(auto it : nums){
        st.insert(it);
       }
       int i = 0;
       for(i = 1; i <= n; i++){
        if(st.count(i)){
            continue;
        }
        return i;
       }
        return i;
    }
};