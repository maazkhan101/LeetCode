class Solution {
public:
    bool isPalindrome(int x) {
        
        bool ans=false;

        string s=to_string(x);
        string r=s;
        reverse(s.begin(),s.end());

        if(s==r)
        {
            return true;
        }

        return ans;
    }
};