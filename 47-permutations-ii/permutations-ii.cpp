// class Solution {
// public:
// void  permute( vector<int>&nums, vector<vector<int>>&ans,int index)
// {
//      vector<bool>visited(21,0);
//     if(index==nums.size())
//     {
//         ans.push_back(nums);
//         return;
//     }
//     for(int i=0;i<nums.size();i++)
//     {
//         if(visited[nums[i]+10]==0)
//         {
//             swap(nums[index],nums[i]);
//             permute(nums,ans,index+1);
//             swap(nums[index],nums[i]);
//             visited[nums[i]+10]=1;
//         }
//     }
// }
//     vector<vector<int>> permuteUnique(vector<int>& nums) {
//        vector<vector<int>>ans;
//        vector<bool>visited(21,0);
//        permute(nums, ans, 0) ;
//        return ans; 
//     }
// };

class Solution {
public:
    void permute(vector<int>& nums, vector<vector<int>>& ans, int index) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        unordered_set<int> used; // track numbers at this recursion depth
        for (int i = index; i < nums.size(); i++) {
            if (used.count(nums[i])) continue; // skip duplicates at same depth
            used.insert(nums[i]);

            swap(nums[index], nums[i]);
            permute(nums, ans, index + 1);
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(nums, ans, 0);
        return ans;
    }
};
