class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = nums[0];
        int currMax = nums[0], maxSum = nums[0];
        int currMin = nums[0], minSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            totalSum += nums[i];

            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(minSum, currMin);
        }

        if (totalSum == minSum)
            return maxSum; // all elements are negative

        return max(maxSum, totalSum - minSum);
    }
};
