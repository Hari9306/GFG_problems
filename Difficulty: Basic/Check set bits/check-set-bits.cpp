
class Solution {
  public:
    int isBitSet(int N) {
        // code here
        int bitlength=log2(N)+1;
        if(N==(pow(2,bitlength)-1)) return 1;
        else return false;
    }
};