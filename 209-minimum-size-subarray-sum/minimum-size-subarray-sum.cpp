class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=0;
        int windowstart=0;
        int windowend=0;
        int minlen=INT_MAX;
        int sum=0;
        int n=nums.size();
        while(windowend<n)
        {
            //expansion
            sum=sum+nums[windowend];
            if(sum>=target)
            {
                len=windowend-windowstart+1;
                minlen=min(minlen,len);
            }
            //shrinking
            while(windowstart<windowend && sum>=target)
            {
                sum=sum-nums[windowstart];
                windowstart++;

                if(sum>=target)
                {
                     len=windowend-windowstart+1;
                     minlen=min(minlen,len);
                }
            }
            windowend++;
        }

         return (minlen==INT_MAX)?0:minlen;
    }
};