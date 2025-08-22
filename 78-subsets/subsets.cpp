class Solution {
public:
void subsequence(vector<int>&nums,int index,vector<vector<int>>&ans,vector<int>temp)
{
    if(index==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    // if we want to not add the element then
    subsequence(nums,index+1,ans,temp);
    // if you want to add this element then
    temp.push_back(nums[index]);
    subsequence(nums,index+1,ans,temp);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        int n=nums.size();
        subsequence(nums,0,ans,temp);
        return ans;
    }
};