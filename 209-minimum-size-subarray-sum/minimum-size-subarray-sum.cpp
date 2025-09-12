class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,ans=INT_MAX;
        int sum=0, n=nums.size();
        for(int right=0;right<n;right++)
        {
            sum+=nums[right];
            while(sum>=target)
            {
                ans=min(ans,right-left+1);//window size nikala hun;
                sum-=nums[left];
                left++;

            }
        }
        return ans==INT_MAX?0:ans;
    }
};