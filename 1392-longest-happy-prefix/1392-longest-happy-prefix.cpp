class Solution {
public:
    // Function to find the longest happy prefix
    string longestPrefix(string s) {
        // Create a vector to store the prefix-suffix lengths
        vector<int> lps(s.length(), 0);

        // Pointer to track length of previous longest prefix suffix
        int len = 0;

        // Start from second character
        for (int i = 1; i < s.length(); i++) {
            // If characters match, increment length and store in lps
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
            }
            // If mismatch occurs and len is not zero, fallback using lps
            else if (len != 0) {
                len = lps[len - 1];
                i--; // retry with same i
            }
            // If no match and len is 0, keep lps as 0
        }

        // Return the prefix with length equal to the last lps value
        return s.substr(0, lps[s.length() - 1]);
    }
};