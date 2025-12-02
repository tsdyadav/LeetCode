class Solution {
public:
   void permutopti(vector<int>&nums,vector<vector<int>>&ans,int index)
{
    if(index==nums.size())
    {
        ans.push_back(nums);
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        permutopti(nums,ans,index+1);
        swap(nums[index],nums[i]);


    }
}
 vector<vector<int>> permute(vector<int>& nums) 
 {
    vector<vector<int>>ans;
    permutopti(nums,ans, 0);
    return ans;
 }

};