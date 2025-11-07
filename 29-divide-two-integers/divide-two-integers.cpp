class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;

        // Determine sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Convert to positive long long to avoid overflow
        long long a = labs((long long)dividend);
        long long b = labs((long long)divisor);
        long long result = 0;

        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            result += multiple;
        }

        if (negative)
            result = -result;

        // Clamp to integer range
        if (result > INT_MAX)
            return INT_MAX;
        if (result < INT_MIN)
            return INT_MIN;

        return (int)result;
    }
};
