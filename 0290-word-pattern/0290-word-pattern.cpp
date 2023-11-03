class Solution {
public:
    bool wordPattern(string pattern, string s) {
            unordered_map<char, string> charToWord;
   unordered_set<string> usedWords;

    istringstream iss(s);
    string word;

    for (char c : pattern) {
        if (!(iss >> word)) {
            return false; // Not enough words in s for the given pattern
        }

        // Check if the current character in pattern has been mapped to a different word
        if (charToWord.find(c) != charToWord.end() && charToWord[c] != word) {
            return false;
        }

        // Check if the current word has been used for a different character in pattern
        if (usedWords.find(word) != usedWords.end() && charToWord[c] != word) {
            return false;
        }

        // Update the mappings
        charToWord[c] = word;
        usedWords.insert(word);
    }

    // Check if there are any remaining words in s
    if (iss >> word) {
        return false;
    }

    return true;
 }
};