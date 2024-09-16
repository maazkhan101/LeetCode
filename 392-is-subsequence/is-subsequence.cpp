class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0, tIndex = 0;

        // Traverse both strings
        while (sIndex < s.length() && tIndex < t.length()) {
            // If characters match, move to the next character in 's'
            if (s[sIndex] == t[tIndex]) {
                sIndex++;
            }
            // Move to the next character in 't' regardless
            tIndex++;
        }

        // If we traversed all characters of 's', then 's' is a subsequence of 't'
        return sIndex == s.length();
    }
};
