class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int cnt1[26] = {0}; // Frequency array for characters in ransomNote
        int cnt2[26] = {0}; // Frequency array for characters in magazine

        // Count the occurrences of each character in ransomNote
        for (char ch : ransomNote) {
            cnt1[ch - 'a']++;
        }

        // Count the occurrences of each character in magazine
        for (char ch : magazine) {
            cnt2[ch - 'a']++;
        }

        // Check if the characters in ransomNote can be constructed from magazine
        for (int i = 0; i < 26; i++) {
            if (cnt1[i] > cnt2[i]) {
                return false;
            }
        }

        // If all characters in ransomNote can be constructed, return true
        return true;
    }
};
