class Solution {
public:
    int maxVowels(string s, int k) {


       int max_vow=-1;

       int i=0;
       int j=0;

       string str="AEIOUaeiou";


        int count_vow=0;
       while(j<s.size())
       {
            if(str.find(s[j])!=std::string::npos)
            {
                count_vow++;
            }
            if(j-i+1==k)
            {
                max_vow=max(max_vow,count_vow);

                if(str.find(s[i])!=std::string::npos)
                {
                    count_vow--;
                    i++;
                }
                else{
                    i++;
                }

                
            }

            j++;
       }

       return max_vow; 
    }
};