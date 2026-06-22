class Solution {
public:
    // Function to reverse the order of words in a string
    string reverseWords(string s) {
        // Vector to store words
        vector<string> words;
        
        // Temporary string to store a single word
        string word = "";
        
        // Traverse the string character by character
        for (int i = 0; i < s.size(); i++) {
            // If the character is not a space, add it to the current word
            if (s[i] != ' ') {
                word += s[i];
            } 
            // If we encounter a space and have a word collected
            else if (!word.empty()) {
                // Push the collected word to words list
                words.push_back(word);
                // Reset word for next word collection
                word = "";
            }
        }
        
        // Push the last word if it exists
        if (!word.empty()) {
            words.push_back(word);
        }
        
        // Reverse the list of words
        reverse(words.begin(), words.end());
        
        // Join the words into a single string separated by spaces
        string result = "";
        for (int i = 0; i < words.size(); i++) {
            result += words[i];
            // Add a space if it's not the last word
            if (i < words.size() - 1) {
                result += " ";
            }
        }
        
        return result;
    }
};