class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // store (value, index)
        vector<pair<int,int>> arr;
        for(int i = 0; i < nums.size(); i++){
            arr.push_back({nums[i], i});
        }

        // sort by value
        sort(arr.begin(), arr.end());

        int st = 0, end = arr.size() - 1;

        while(st <= end){
            int sum = arr[st].first + arr[end].first;

            if(sum == target){
                // return original indices
                return {arr[st].second, arr[end].second};
            }
            else if(sum > target){
                end--;
            }
            else {
                st++;
            }
        }

        return {};
    }
};
