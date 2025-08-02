class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        int maxMul=INT_MIN;

        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int first=pq.top();
            pq.pop();
        while(!pq.empty())
        {
            int second=pq.top();
            pq.pop();
            int mul=(first-1)*(second-1);
            
            maxMul=max(maxMul,mul);
            //5*4/4
            first=(first*second)/first;

        }
        return maxMul;

    }
};