class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        int n=word1.length();
        int m=word2.length();


        int t=n+m;

        // if(n<m)
        // {
        //     t=n;
        // }
        // else{
        //     t=m;
        // }
        
            int i=0;
            
            while(i<word1.length() || i<word2.length())
            
            {
                     if (i < word1.length()) {
                ans.push_back(word1[i]);
            }
            if (i < word2.length()) {

                ans.push_back(word2[i]);
            }
            i++;
            }
        

        return ans;
    }
};