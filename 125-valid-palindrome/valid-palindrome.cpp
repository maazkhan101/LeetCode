class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }

        for(int i=0;i<s.size();i++)
        {
            if(!isalnum(s[i]))
            {
                s.erase(i,1);
                i--;
            }
            else if(s[i]==' ')
            {
                s.erase(i,1);
            }
        }
        int i=0;
        int j=s.size()-1;

        bool ans=true;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            if(s[i]!=s[j])
            {
                ans=false;
                break;
            }
        }

        for(int i=0;i<s.size();i++)
        {
            cout<<s[i];
        }
        return ans;

    }
};