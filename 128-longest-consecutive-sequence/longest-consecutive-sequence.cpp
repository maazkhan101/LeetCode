class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());


        int count=1;
        set<int>s;
        vector<int>v2;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
         for(auto i:s)
        {
            v2.push_back(i);
        }
        int max_len=1;
       
        int i=0;
        int j=0;

        for(int i=1;i<v2.size();i++)
        {
            if(v2[i]==v2[i-1]+1)
            {
                count++;
                max_len=max(max_len,count);
            }
            else{
                count=1;
            }
        }
        if(v2.size()==0)
        {
            max_len=0;
        }
        return max_len;
    }
};
