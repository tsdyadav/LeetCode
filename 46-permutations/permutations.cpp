class Solution {
public:
void solver(int i,vector<int>&nums,vector<vector<int>>&ans)
{
    if(i==nums.size())
    {
        ans.push_back(nums);
        return;
    }
    //pick
    for(int j=i;j<nums.size();j++)
    {
        swap(nums[i],nums[j]);
        solver(i+1,nums,ans);
        swap(nums[i],nums[j]); //backtraking
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        solver(0,nums,ans);
        return ans;
    }
};