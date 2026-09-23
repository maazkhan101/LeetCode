class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int i=0;
        int j=0;
        int max_len=INT_MIN;

        unordered_map<int,int>m;

        while(j<fruits.size())
        {
            m[fruits[j]]++;


            if(m.size()>2)
            {
               

                while(m.size()>2)
                {
                    m[fruits[i]]--;


                    if(m[fruits[i]]==0)
                    {
                        m.erase(fruits[i]);
                    }
                    i++;
                }
            
            }
             max_len=max(max_len,j-i+1);
            j++;

        }

        return max_len;

    }
};