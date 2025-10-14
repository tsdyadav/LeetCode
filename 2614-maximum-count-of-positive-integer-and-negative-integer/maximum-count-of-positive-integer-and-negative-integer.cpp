class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0,neg=0,zer=0;
        for(int num : nums)
        {
            if(num>0)
            pos++;
            else if(num<0)
            neg++;
            else
            zer++;

        }
        return max(pos,neg);
    }
};