class Solution {
public:
void solver(int i,vector<int>& nums,vector<int>& temp,vector<vector<int>>& ans)
{
    if(i==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    // pick
    temp.push_back(nums[i]);
    solver(i+1,nums,temp,ans);
    //backtrak
    temp.pop_back();
    //not pikking
    solver(i+1,nums,temp,ans);

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        solver(0,nums,temp,ans);
        return ans;
    }
};