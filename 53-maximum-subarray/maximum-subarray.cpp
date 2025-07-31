class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm
        int maxsum=nums[0],currentSum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            currentSum=max(nums[i],currentSum+nums[i]);
            maxsum=max(maxsum,currentSum);
        }
        return maxsum;
    }
};