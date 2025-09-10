class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=0, m=nums.size()-1;
        vector<int> ans;
        while(n<m)
        {
            if(nums[n]+nums[m]==target)
            {
                ans.push_back(n+1);
                ans.push_back(m+1);
                return ans;
            }
            else 
            if(nums[n]+nums[m]>target) m--;
            else 
             n++;
        }
        return ans;
    }
};