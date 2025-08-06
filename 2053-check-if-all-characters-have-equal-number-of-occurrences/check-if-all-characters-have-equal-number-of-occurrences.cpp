class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>m;
        bool ans=true;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }

        int check=m[s[0]];

        for(auto i:m)
        {
                if(i.second!=check)
                {
                    ans=false;
                }
        }   
        return ans;
    }
};