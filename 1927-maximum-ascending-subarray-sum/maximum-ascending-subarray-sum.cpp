class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum=nums[0];//60
        int cursum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i])
            {
                cursum+=nums[i];
            }
            else{
                sum=max(sum,cursum);
                cursum=nums[i];
            }
        }
        sum=max(sum,cursum);
        return sum;
    }
};