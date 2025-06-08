// User function Template for C++

class Solution {
  public:
    // Function to check if the number is sparse or not.
    bool isSparse(int n) {
        // Your code
        return (n&(n>>1))==0;
    }
};