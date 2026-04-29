class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        long long max_sum=0;
        long long sum=0;


        unordered_map<int,int>m;
        
        int i=0;
        int j=0;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            m[nums[j]]++;

            if(j-i+1==k)
            {
                if(m.size()==j-i+1)
                {
                    max_sum=max(max_sum,sum);
                    
                }
                m[nums[i]]--;
                if(m[nums[i]]==0)
                {
                    m.erase(nums[i]);
                }
                sum=sum-nums[i];
                i++;
                
            }

            j++;
        } 

        return max_sum;  
    }
};