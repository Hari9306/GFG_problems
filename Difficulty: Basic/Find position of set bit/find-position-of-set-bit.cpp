class Solution {
  public:
    int findPosition(int n) {
        // Check if n has exactly one set bit
        if (n <= 0 || (n & (n - 1)) != 0) {
            return -1;
        }
        // __builtin_ctz returns number of trailing 0s
        return __builtin_ctz(n) + 1;
    }
};
