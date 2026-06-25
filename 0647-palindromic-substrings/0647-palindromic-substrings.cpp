class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;

        // Expand around center
        auto expand = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                count++;
                left--;
                right++;
            }
        };

        for (int i = 0; i < n; i++) {
            // Odd length palindrome
            expand(i, i);

            // Even length palindrome
            expand(i, i + 1);
        }

        return count;
    }
};