class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int ans=INT_MAX;
        if(nums.size()==1)
        {
            return 0;
        }
        

            for(int i=0;i<=nums.size()-k;i++)
            {
                ans=min(nums[i+k-1]-nums[i],ans);
            }
        

        return ans;
    }
};