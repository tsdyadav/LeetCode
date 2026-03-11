class Solution {
public:
    void solve(int idx,vector<int>&nums,vector<int>temp,vector<vector<int>>&ans)
    {
        if(idx==nums.size())
        {
            //core logic
            ans.push_back(temp);
            return;
        }
        //pick
        temp.push_back(nums[idx]);
        solve(idx+1,nums,temp,ans);
        //backtraking
        temp.pop_back();

        // notpick
        solve(idx+1,nums,temp,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> ans;
      vector<int>temp;
      solve(0,nums,temp,ans);
      return ans;  
    }
};