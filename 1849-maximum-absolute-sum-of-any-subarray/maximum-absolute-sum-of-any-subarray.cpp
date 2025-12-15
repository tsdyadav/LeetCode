class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        vector<int>temp;
        int currmax=nums[0];
        int currmin=nums[0];
        int ans=abs(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
           currmax=max(currmax +nums[i],nums[i]);
            currmin=min(currmin+nums[i],nums[i]);
            ans=max(ans,max(currmax,abs(currmin)));

        }
        return ans;

    }
};