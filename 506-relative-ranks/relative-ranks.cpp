class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({score[i], i});  // {score, index}
        }

        sort(arr.rbegin(), arr.rend()); // sort in descending order of score

        vector<string> res(n);

        for (int i = 0; i < n; i++) {
            if (i == 0) res[arr[i].second] = "Gold Medal";
            else if (i == 1) res[arr[i].second] = "Silver Medal";
            else if (i == 2) res[arr[i].second] = "Bronze Medal";
            else res[arr[i].second] = to_string(i + 1);
        }

        return res;
    }
};
