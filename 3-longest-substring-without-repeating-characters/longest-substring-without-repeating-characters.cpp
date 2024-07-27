class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int tail=0,ans=0,head=0;
        unordered_map<char,int>m;

        for(head=0;head<s.length();head++)
        {
            m[s[head]]++;

            while(m[s[head]]>1)
            {
                ans=max(ans,head-tail);
                m[s[tail]]--;
                tail++;
            }
            
        }
        return max(ans,head-tail);
    }
};