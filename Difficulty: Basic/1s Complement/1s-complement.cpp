
class Solution {
  public:
    string onesComplement(string S, int N) {
        // code here
        string madhu;
        for(int i=0;i<N;i++){
          if(S[i]=='1') {
              madhu+='0';
          }
          else{
              madhu+='1';
          }
            
        }
        return madhu;
    }
};