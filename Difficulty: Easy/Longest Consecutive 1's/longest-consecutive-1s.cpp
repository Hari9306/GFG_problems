// User function Template for C++

/*  Function to calculate the longest consecutive ones
 *   N: given input to calculate the longest consecutive ones
 */
class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        int max_ones=0;
        int cnt=0;
        while(n!=0){
            if(n&1==1){
                cnt++;
            }
            else{
                cnt=0;
            }
            n=n>>1;
             max_ones=max(max_ones,cnt);
        }
        return max_ones;
    }
};
