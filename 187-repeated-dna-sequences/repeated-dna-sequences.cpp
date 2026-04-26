class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i=0;
        int j=0;
        int k=10;
        vector<string>m;
        string temp="";
        vector<string>ans;
        while(j<s.size())
        {
            if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i] =='T')
            {
                temp=temp + s[j];
            }
            
            if(j-i+1==k)
            {
                m.push_back(temp);
                temp.erase(0,1);
                i++;
                
            }
            j++;
        }
        unordered_map<string,int>mp;

        for(auto i:m)
        {
            mp[i]++;
        }

        for(auto i:mp)
        {
            if(i.second>1)
            {
                ans.push_back(i.first);
            }
        }
        sort(ans.begin(),ans.end());

        return ans;
    }
};