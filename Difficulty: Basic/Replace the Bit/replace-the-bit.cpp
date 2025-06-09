class Solution {
  public:
    int replaceBit(int n, int k) {
       // k found --> replace bit with (1--0)
       // k not found  --> return the N value
       int bit_length=log2(n)+1;
       if(k>bit_length) return n;
       int posfromright=bit_length-k;
       if(n&(1<<posfromright)){
           n=n^(1<<posfromright);
       }
       return n;
      
    }
};