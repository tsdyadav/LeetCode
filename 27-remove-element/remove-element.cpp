class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // vector<int>res;
        int idx=0;
        // int count;
        for(int x:nums)
        {
            if(x!=val)
            {
                nums[idx++]=x;

            }
        }
        return idx;
    }
};