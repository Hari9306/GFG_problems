class Solution {
  public:
    long long factorSum(int N) {
        // Your code goes here
        long long  sum=0;
        for(long long  i=1;i*i<=N;i++){
            if(N%i==0){
                sum+=i;
                if(i!=N/i){
                    sum+=N/i;
                }
            }
        }
        return sum;
    }
};