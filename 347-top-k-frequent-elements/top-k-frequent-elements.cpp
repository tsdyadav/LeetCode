class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        priority_queue<pair<int,int>> pq;
        vector<int>ans;
        for(int num :nums)
        freq[num]++;
        for(auto f :freq)
        {
            pq.push({f.second,f.first});
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};