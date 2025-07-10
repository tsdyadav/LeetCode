class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> freq;

    // Step 1: Count frequency of each number
    for (int num : nums) {
        freq[num]++;
    }

    // Step 2: Use min-heap to store top k elements
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

    for (auto& [num, count] : freq) {
        minHeap.push({count, num});
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    // Step 3: Extract result
    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().second);
        minHeap.pop();
    }

    return result;
}
    
};