class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxMul=nums[0],currentMax=nums[0];
        int currentMin=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<0)
            swap(currentMin,currentMax);
            currentMax=max(nums[i],currentMax*nums[i]);
            currentMin=min(nums[i],currentMin*nums[i]);
            maxMul=max(maxMul,currentMax);
        }
        return maxMul;
    }
};