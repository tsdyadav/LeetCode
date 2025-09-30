class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        int third=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(first>=nums[i])
            {
                first=nums[i];
            }
            else if(second>=nums[i])
            second =nums[i];
            else
            {third=nums[i];
                return true;
            }
        }
        return false;
        
    }
};