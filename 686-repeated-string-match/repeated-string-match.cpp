#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count = 1;

        // Keep appending until length >= b
        while (repeated.size() < b.size()) {
            repeated += a;
            count++;
        }

        // Check if b is substring
        if (repeated.find(b) != string::npos) return count;

        // Check one more repeat
        repeated += a;
        count++;
        if (repeated.find(b) != string::npos) return count;

        // Not found
        return -1;
    }
};
