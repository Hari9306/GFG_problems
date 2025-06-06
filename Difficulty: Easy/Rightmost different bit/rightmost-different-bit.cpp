// User function Template for C++

class Solution {
  public:
    // Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n) {
        // Your code here
         if (m == n) {
            return -1; // Or 0, or throw an exception, depending on problem requirements
        }
        int pos=0;
        while((m&1)==(n&1)){
            pos++;
            m=m>>1;
            n=n>>1;
        }
        return pos+1;
        
    }
};