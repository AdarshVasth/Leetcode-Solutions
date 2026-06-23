class Solution {
public:
    // Function to generate the nth term of the count-and-say sequence
    string countAndSay(int n) {
        string result = "1";

        // Generate the sequence up to the nth term
        for (int i = 1; i < n; ++i) {
            string current = "";
            int count = 1;

            // Traverse the previous result
            for (int j = 1; j < result.size(); ++j) {
                // If current character matches previous, increment count
                if (result[j] == result[j - 1]) {
                    count++;
                } else {
                    // Append count and character to current result
                    current += to_string(count) + result[j - 1];
                    count = 1;
                }
            }

            // Append the last group
            current += to_string(count) + result.back();

            // Update result for next iteration
            result = current;
        }

        // Return the final result
        return result;
    }
};