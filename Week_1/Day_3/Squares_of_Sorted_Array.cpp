class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;

        for (int k = n - 1; k >= 0; k--) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];

            if (leftSquare > rightSquare) {
                ans[k] = leftSquare;
                left++;
            } else {
                ans[k] = rightSquare;
                right--;
            }
        }

        return ans;
    }
};