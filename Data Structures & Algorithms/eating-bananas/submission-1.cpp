class Solution {
public:
        int calculateTime(int h, int k, vector<int>&piles){
            int hours = 0;
            int n = piles.size();
            for(int i = 0; i < n; i++){
                if(piles[i] % h == 0){
                    hours += piles[i] / h;
                }
                else{
                    hours += piles[i] / h + 1;
                }
            }
            return hours <= k;
        }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = INT_MAX;
        while(low <= high){
            int mid = (low + high)/2;
            if(calculateTime(mid, h, piles)){
                ans = min(ans, mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
