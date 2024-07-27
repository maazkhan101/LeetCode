class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {


        int head=0,tail=0,ans=0,sum=0;
        unordered_map<int,int>m;
        for(head=0;head<nums.size();head++)
        {
            m[nums[head]]++;

            while(m[nums[head]]>1)
            {
                ans=max(ans,sum);
                sum=sum-nums[tail];
                m[nums[tail]]--;
                tail++;
            }
            if(m[nums[head]]==1)
            {
                sum=sum+nums[head];
            }
        }   

        return max(ans,sum);
    }
};