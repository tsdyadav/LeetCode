class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> res;
        string prev = "";

        for (const string& path : folder) {
            if (res.empty() || path.find(res.back() + "/") != 0) {
                res.push_back(path);
            }
        }
        return res;
    }
};
