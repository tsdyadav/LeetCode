#include <bits/stdc++.h>  // or include <string> and <algorithm>
using namespace std;

class Solution {
public:
   int reverse(int x) {
        long long rev = 0;  // Use long long to detect overflow
        
        while (x != 0) {
            int digit = x % 10;   // Extract last digit
            rev = rev * 10 + digit; // Append digit
            
            // Check for overflow after each step
            if (rev < INT_MIN || rev > INT_MAX)
                return 0;
            
            x /= 10;  // Remove last digit
        }
        
        return static_cast<int>(rev);
    }
};
