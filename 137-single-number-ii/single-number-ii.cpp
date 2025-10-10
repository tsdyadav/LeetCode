class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto num:nums)
        mp[num]++;
        for(auto &pair:mp)
        {
            if(pair.second==1)
            return pair.first;
        }

        return -1;
    }
};