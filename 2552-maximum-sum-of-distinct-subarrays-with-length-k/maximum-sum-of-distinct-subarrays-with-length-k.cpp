class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        long long sum=0,maxsum=0;
        int i=0;
        set<int>s;
        for(int j=0;j<nums.size();j++)
        {

             while(s.count(nums[j]) || s.size()==k)
            {
                sum-=nums[i];
                s.erase(nums[i]);
                i++;
                
            }
            sum+=nums[j];
            s.insert(nums[j]);


           


            if(s.size()==k)
            {
                maxsum=max(maxsum,sum);
            }


        }

        return maxsum;
    }
};