class Solution {
public:
    
    int findFrequency(vector<int>& arr, int target) {
        int left = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        int right = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
        return right - left;
    }

    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();

        vector<int> candidates = {
            arr[n/4],
            arr[n/2],
            arr[3*n/4]
        };

        for (int num : candidates) {
            if (findFrequency(arr, num) > n/4)
                return num;
        }

        return -1;
    }
};