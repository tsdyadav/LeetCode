class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto num: nums)
        freq[num]++;
        int maxkey;
        int count=0;

        for(auto f : freq)
        {
            
            if(f.second>count)
           {
            count=f.second;
            maxkey=f.first;
           } 



        }
        return maxkey ;
    }
};