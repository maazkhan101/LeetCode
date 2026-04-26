class Solution {
public:
    int lengthOfLongestSubstring(string s) {

      int i=0;
      int j=0;
      int maxlength=0;
        unordered_map<char,int>m;
        
        while(j<s.size())
        {
            
                  m[s[j]]++;

            
            while(m[s[j]]>1)
            {
                m[s[i]]--;
                i++;
            }
            maxlength=max(maxlength,j-i+1);
            j++;

            
            
        }
        return maxlength;
    }
};