// User function Template for C++

class Solution {
  public:
    int adjacentPairs(vector<int> arr) {
        // code here
        int cnt=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==1){
                cnt++;
            }
        }
        return cnt;
    }
};