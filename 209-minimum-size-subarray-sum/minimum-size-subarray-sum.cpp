class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

     int i=0;
     int j=0;
     int ans=INT_MAX;
    int sum=0;

    while(j<nums.size())
    {

        sum=sum+nums[j];

        
        while(sum>=target)
        {
            ans=min(ans,j-i+1);
            sum=sum-nums[i];
            i++;
            
        }
        j++;
        
    }
    if(ans==INT_MAX)
    {
        ans=0;
    }
    return ans;


    }
};