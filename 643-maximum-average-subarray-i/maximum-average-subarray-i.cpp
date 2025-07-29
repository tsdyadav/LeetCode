class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double ansmax=INT_MIN;
// first window
       for(int i=0;i<k;i++)
       sum+=nums[i];
       ansmax=sum/k;
       // for sliding windows
       for(int j=k;j<nums.size();j++)
       {
        sum=sum+nums[j]-nums[j-k];
        ansmax=max(ansmax,sum/k);
       }

       return ansmax;
    }
};