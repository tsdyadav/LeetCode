class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums)
        mp[num]++;
        for(auto &pair : mp)
        {
            if(pair.second>=2)
            return true;
        }
        return false;
    }
};