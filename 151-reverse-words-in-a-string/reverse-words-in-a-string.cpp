class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
         string word;
        vector<string> result;

    while (ss >> word) {  
        result.push_back(word);
    }
    string ans="";
    reverse(result.begin(),result.end());

    for(int i=0;i<result.size();i++)
    {

        if(i==result.size()-1)
        {
            ans=ans+result[i];
        }
        else{
            ans=ans+result[i];
            ans=ans+ " ";
        }
    }
        return ans;
    }
};