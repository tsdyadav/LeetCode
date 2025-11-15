class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        if (valueDiff < 0) return false;

        unordered_map<long long, long long> bucket;
        long long size = (long long)valueDiff + 1;

        for (int i = 0; i < nums.size(); i++) {
            long long num = nums[i];
            long long bucketID = num / size;

            if (num < 0) bucketID--;

            // same bucket
            if (bucket.count(bucketID))
                return true;

            // check neighbor buckets
            if (bucket.count(bucketID - 1) && llabs(num - bucket[bucketID - 1]) <= valueDiff)
                return true;

            if (bucket.count(bucketID + 1) && llabs(num - bucket[bucketID + 1]) <= valueDiff)
                return true;

            bucket[bucketID] = num;

            // remove element leaving the window
            if (i >= indexDiff) {
                long long oldNum = nums[i - indexDiff];
                long long oldBucket = oldNum / size;
                if (oldNum < 0) oldBucket--;
                bucket.erase(oldBucket);
            }
        }
        return false;
    }
};
