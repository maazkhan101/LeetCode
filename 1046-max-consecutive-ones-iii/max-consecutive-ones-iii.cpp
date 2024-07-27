

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int head=0,tail=0,ans=0;
       int n=nums.size();
        for(head=0;head<n;head++)
        {
            
            if(nums[head]==0)
            {
                k--;
            }
          while(k<0)
          {
            ans=max(ans,head-tail);
            if(nums[tail]==0)
            k++;
            tail++;
          }
             
        }
        return max(ans,head-tail);
    }
};