class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=-1;
        int smax=-1;
        for(int i :nums)
        {
            if(max<i)
            {
                smax=max;
                max=i;
            }
            else if(smax<i)
            smax=i;
        }
        return (max-1)*(smax-1);
    }
};