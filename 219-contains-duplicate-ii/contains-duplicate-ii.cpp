#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> lastSeen; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];
            if (lastSeen.count(val) && i - lastSeen[val] <= k) {
                return true;
            }
            lastSeen[val] = i;  // update last index
        }
        return false;
    }
};
