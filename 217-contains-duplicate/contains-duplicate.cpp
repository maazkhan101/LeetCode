class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        

        unordered_map<int,int>m;
        bool ans=false;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }


        for(auto i:m)
        {
            if(i.second>=2)
            {
                ans=true;
            }
        }

        return ans;
    }
};