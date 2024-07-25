class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans;
        string check;
        stack<int>s;


        for(int i=0;i<words.size();i++)
        {
            string temp=words[i];
            reverse(words[i].begin(),words[i].end());
            if(temp==words[i])
            {
                ans=words[i];
                break;
            }

        }

        return ans;
    }
};