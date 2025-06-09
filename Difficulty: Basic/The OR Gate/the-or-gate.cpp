
class Solution {
  public:
    int orGate(vector<int> arr, int N) {
        // code here
        int y=arr[0];
        for(int i=0;i<N;i++)
        {
             y = y|arr[i];
        }
        return y;
    }
};