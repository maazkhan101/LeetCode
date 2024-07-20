class Solution {
public:
    string reverseWords(string s) {
        
         string t;

        stack<char>st;

       for (int i = 0; i <= s.length(); i++) {
            if (i < s.length() && s[i] != ' ') {
                st.push(s[i]);
            } else {
                while (!st.empty()) {
                    t.push_back(st.top());
                    st.pop();
                }
                if (i < s.length()) { 
                    t.push_back(' ');
                }
            }
        }
        
        return t;
    }
};