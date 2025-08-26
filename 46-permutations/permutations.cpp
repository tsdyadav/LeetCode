
class Solution {
public:
/*void permute(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited)
{
    if(visited.size()==temp.size())
    {
        ans.push_back(temp);
        return ;
    }
    for(int i=0;i<nums.size();i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            temp.push_back(nums[i]);
            permute(nums,ans,temp,visited);
            visited[i]=0;
            temp.pop_back();

        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) 
    {
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool>visited(nums.size(),0);
    permute(nums,ans,temp,visited);
    return ans;
    }
*/
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