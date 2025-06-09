class Solution {
  public:
    int xorGate(vector<int> arr, int N) {
        // code here
        int y = 0;
        for( int i =0;i<N;i++)
        {
            y = y^arr[i];
        }
        return y;
    }
};