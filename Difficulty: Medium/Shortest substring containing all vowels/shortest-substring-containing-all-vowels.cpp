class Solution {
  public:
    int substrWithVowels(string &s1, string &s2) {
        unordered_set<char> required(s1.begin(), s1.end());
        unordered_map<char, int> window_count;
        int left = 0, min_len = INT_MAX;
        int formed = 0;  

        for (int right = 0; right < s2.length(); ++right) {
            char ch = s2[right];
            if (required.count(ch)) {
                window_count[ch]++;
                if (window_count[ch] == 1)  
                    formed++;
            }

            
            while (formed == required.size()) {
                min_len = min(min_len, right - left + 1);

                
                char left_char = s2[left];
                if (required.count(left_char)) {
                    window_count[left_char]--;
                    if (window_count[left_char] == 0) {
                        formed--;
                    }
                }
                left++;
            }
        }

        return min_len == INT_MAX ? -1 : min_len;
    }
};
