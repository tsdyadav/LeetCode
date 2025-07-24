class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;

        for (int i = 0; i <= k; i++) {  // Run for k+1 iterations
            vector<int> temp(dist);
            for (auto& flight : flights) {
                int u = flight[0], v = flight[1], w = flight[2];
                if (dist[u] != INT_MAX && dist[u] + w < temp[v]) {
                    temp[v] = dist[u] + w;
                }
            }
            dist = temp;
        }

        return (dist[dst] == INT_MAX) ? -1 : dist[dst];
    }
};