class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        vector<int>c;
        int i=0,j=0;
        while(i<a.size()||j<b.size()){
            if(c.size()==k){
                    return c[k-1];
                }
            if (i < a.size() && (j >= b.size() || a[i] < b[j])) {
                c.push_back(a[i]);
                i++;
            } else if (j < b.size()) {
                c.push_back(b[j]);
                j++;
            }
        }
        return c[k-1];
        
    }
};