class Solution {
public:
    int reverseBits(int n) {
        unsigned int result = 0; // Use unsigned to avoid issues with sign bits
        for (int i = 0; i < 32; i++) {
            result <<= 1;          // Shift result left by 1 to make space for the next bit
            result |= (n & 1);     // Add the least significant bit of n to result
            n >>= 1;               // Shift n right by 1 to process the next bit
        }
        return result;
    }
};
