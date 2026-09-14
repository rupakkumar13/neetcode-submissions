class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int low = 0;
        int high = n - 1;
        int boat = 0;
        while(low <= high){
            if(people[low] + people[high] <= limit){
                low++;
            }
            high--;
            boat++;
        } 
        return boat;
    }
};