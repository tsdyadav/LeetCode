class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        long long n=nums.size();
        if( n==2)
        {
            return nums[1]-nums[0];
        }
        if(n==1)
        return 0;
        for(int i=1;i<n;i++)
        {
            int temp= nums[i]-nums[i-1];
            ans=max(ans,temp);
            
        }
        return ans;

    }
};