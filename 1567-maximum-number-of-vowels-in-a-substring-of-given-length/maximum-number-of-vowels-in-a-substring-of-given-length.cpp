class Solution {
public:
    int maxVowels(string s, int k) {

            int maxvowels=0;
            int windowvowels=0;

            set<char>S;

            S.insert('a');
            
            S.insert('e');
            
            S.insert('i');
            
            S.insert('o');
            
            S.insert('u');

            for(int i=0;i<k;i++)
            {
                if(S.find(s[i])!=S.end())
                {
                    windowvowels++;
                }
            }

            maxvowels=windowvowels;


            for(int i=k;i<s.length();i++)
            {
                if(S.find(s[i-k])!=S.end())
                {
                    windowvowels--;
                }
                if(S.find(s[i])!=S.end())
                {
                    windowvowels++;
                }
                
                 maxvowels=max(windowvowels,maxvowels);
            }
           

            return maxvowels;
    }
};