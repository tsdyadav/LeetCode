class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        int n=nums.size()/3;
        for(auto num: nums)
        {
            freq[num]++;
        }
        for(auto num: freq)
        {
            if(num.second>n)
            {
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};