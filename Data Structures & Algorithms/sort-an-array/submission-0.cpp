class Solution {
    private:
    int partition(vector<int>&nums, int low, int high){
        int j = low;
        int n = high;
        int pivot = nums[high];
        for(int i = low; i<n; i++){
            if(nums[i] < pivot){
                swap(nums[i], nums[j]);
                j++;
            }
        }
        swap(nums[high], nums[j]);
        return j;
    }
    private:
    void quickSort(vector<int>&nums, int low, int high){
        if(low < high){
            int pi = partition(nums, low, high);
            quickSort(nums, low, pi - 1);
            quickSort(nums, pi + 1, high);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        quickSort(nums, low, high);
        return nums;
    }
};