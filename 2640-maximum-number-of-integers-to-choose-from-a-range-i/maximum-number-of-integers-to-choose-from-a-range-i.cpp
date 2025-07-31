class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        unordered_map<int,int>m;

        for(int i=0;i<banned.size();i++)
        {
            m[banned[i]]++;
        }   
        int sum=0;
        int count=0;
        for(int i=1;i<=n;i++)
        {
            if(m.find(i)==m.end() && sum+i<=maxSum)
            {
                sum=sum+i;
                count++;
            }
        }
        return count;
    }
};