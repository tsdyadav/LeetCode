class Solution {
public:
   
long long numIdenticalPairs(const vector<int>& nums) {
    unordered_map<int,long long> freq;
    for (int x : nums) freq[x]++;
    long long ans = 0;
    for (auto &p : freq) {
        long long f = p.second;
        ans += f * (f - 1) / 2;
    }
    return ans;
}

};