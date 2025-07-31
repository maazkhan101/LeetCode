class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance = 0;
        int count = 0;

        for (char c : s) {
            if (c == '(') {
                balance++;
            } else { // c == ')'
                if (balance > 0) {
                    balance--; // match with an open
                } else {
                    count++; // need an extra '('
                }
            }
        }

        return count + balance; // unmatched ')' + unmatched '('
    }
};
