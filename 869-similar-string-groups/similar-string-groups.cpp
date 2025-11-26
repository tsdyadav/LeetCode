class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        vector<int> parent(n);
        
        for (int i = 0; i < n; i++) parent[i] = i;
        
        function<int(int)> find = [&](int x) {
            return parent[x] == x ? x : parent[x] = find(parent[x]);
        };
        
        auto unite = [&](int a, int b) {
            a = find(a);
            b = find(b);
            if (a != b) parent[b] = a;
        };
        
        auto similar = [&](string &a, string &b) {
            int diff = 0;
            for (int i = 0; i < a.size(); i++) {
                if (a[i] != b[i]) diff++;
                if (diff > 2) return false;
            }
            return diff == 0 || diff == 2;
        };
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (similar(strs[i], strs[j])) {
                    unite(i, j);
                }
            }
        }
        
        int count = 0;
        for (int i = 0; i < n; i++)
            if (find(i) == i) count++;
        
        return count;
    }
};
