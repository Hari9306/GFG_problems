class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int  max_sum=0,sum=0;
        for(int i=1;i<arr.size();i++){
            sum=arr[i]+arr[i-1];
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};