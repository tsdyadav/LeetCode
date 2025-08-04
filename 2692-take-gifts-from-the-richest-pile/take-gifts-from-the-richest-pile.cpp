#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <numeric> // for accumulate

using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq(gifts.begin(), gifts.end());
        
        while (k-- && pq.top() > 1) {
            long long top = pq.top(); pq.pop();
            long long temp = sqrt(top); // floor(sqrt(top))
            pq.push(temp);
        }

        long long total = 0;
        while (!pq.empty()) {
            total += pq.top();
            pq.pop();
        }

        return total;
    }
};
