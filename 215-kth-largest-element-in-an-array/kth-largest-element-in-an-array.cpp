class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto &p : nums)
        {
            pq.push(p);
        }
        int result;
        while(k>0)
        {
            result=pq.top();
            pq.pop();
            k--;
        }
        return result;
    }
};