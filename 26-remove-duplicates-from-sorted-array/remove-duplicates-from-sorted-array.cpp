class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      unordered_map<int,int> freq;
        vector<int>result;
        for(int x:nums)
        {
            if(freq[x]<1)
            {
                result.push_back(x);
                freq[x]++;
            }
        }
        int i=0;
        for(auto x:result)
        {
            nums[i++]=x;
        }
        return result.size();
    }
};