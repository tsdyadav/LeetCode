class Solution {
public:
    void solve(int idx, vector<int>&nums, set<vector<int>>&ans)
    {
        if(idx==nums.size())
        {
            ans.insert(nums);
            return;
        }
        for(int j=idx;j<nums.size();j++)
        {
            swap(nums[idx],nums[j]);
            solve(idx+1,nums,ans);
            swap(nums[idx],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>ans;
        solve(0,nums,ans);
        vector<vector<int>>result;
        for(auto a : ans)
        result.push_back(a);
        return result;
    }
};