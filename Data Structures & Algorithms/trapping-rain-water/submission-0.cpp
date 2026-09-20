class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int left = 1;
        int right = n - 2;

        int leftMax = height[0];
        int rightMax = height[n - 1];

        int res = 0;

        while (left <= right) {

            if (leftMax <= rightMax) {
                res += max(0, leftMax - height[left]);
                leftMax = max(leftMax, height[left]);
                left++;
            }
            else {
                res += max(0, rightMax - height[right]);
                rightMax = max(rightMax, height[right]);
                right--;
            }
        }

        return res;
    }
};
