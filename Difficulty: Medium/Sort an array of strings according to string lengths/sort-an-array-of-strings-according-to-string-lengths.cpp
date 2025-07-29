class Solution {
  public:
    void sortByLength(vector<string>& arr) {
        stable_sort(arr.begin(), arr.end(), [](const string &a, const string &b) {
            return a.length() < b.length();
        });
    }
};
