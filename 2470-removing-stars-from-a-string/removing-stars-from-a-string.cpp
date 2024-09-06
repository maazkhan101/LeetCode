class Solution {
public:
    string removeStars(string s) {

            stack<char>st;
            stack<char>s1;
            string ans;
            for(int i=0;i<s.length();i++)
            {
                st.push(s[i]);
                if(st.top()=='*')
                {
                    st.pop();
                    st.pop();
                }
            }

            while(!st.empty())
            {
                s1.push(st.top());
                st.pop();
            }
             while(!s1.empty())
            {
                ans.push_back(s1.top());
                s1.pop();
            }

        return ans;
    }
};