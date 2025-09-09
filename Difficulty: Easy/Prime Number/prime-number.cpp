class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if (n<=1) return 0;
        int cnt=0;
        for(int  i=2;i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if(i!=n/i){
                    cnt++;
                }
            }
        }
        if(cnt==0) return 1;
        return 0;
    }
};
