class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // code here
     int res=a^b;
     int cnt=0;
     while(res!=0){
         if((res&1)==1){
             cnt++;
         }
       res=res>>1;
     }
     return cnt;
    }
};