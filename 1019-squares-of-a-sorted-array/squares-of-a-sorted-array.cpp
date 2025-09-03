class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int x:nums)
        {
            int temp=x*x;
            result.push_back(temp);

        }
        sort(result.begin(),result.end());
        return result;
    }
};