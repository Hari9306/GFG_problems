// User function Template for C++

class Solution {
  public:
    // Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n) {
        // Your code here
       if (m == n) {
            return -1; 
        }

        int xor_result = m ^ n;
        int pos = 1;

        
        while ((xor_result & 1) == 0) { 
            xor_result = xor_result >> 1;
            pos++; 
        }
        return pos;
    }
};