class Solution {
public:
    int maxArea(vector<int>& heights) {
       int ans = INT_MIN;
       int n = heights.size();
       int low = 0;
       int high = n - 1;
       int water = 0;
       while(low < high){
        water = min(heights[low], heights[high]) * (high - low);
        ans = max(water, ans);
        if(heights[low] < heights[high]){
            low++;
        }
        else{
            high--;
        }
       } 
       return ans;
    }
};
