class Solution {
  public:
    vector<int> getXor(vector<int> A, int N) {
        // Write your Code here
        int x=0;
         for(int i=0;i<N;i++)
         {
             x^=A[i];
         }
         for(int i=0;i<N;i++){
             A[i]=x^A[i];
         }
         return A;
    }
};