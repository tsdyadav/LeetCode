class Solution {
public:
  int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Find intersection point
    do {
        slow = nums[slow];//3 4 2
        fast = nums[nums[fast]]; //2 2
    } while (slow != fast);

    // Phase 2: Find entrance of cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

};