class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

            int minlenwindow=INT_MAX;
            int sum=0;

            int low=0;
            int high=0;

            while(high<nums.size())
            {
                sum=sum+nums[high];
                high++;

                while(sum>=target)
                {
                    int currentwindowsize=high-low;
                    minlenwindow=min(minlenwindow,currentwindowsize);

                    sum=sum-nums[low];
                    low++;
                }
            }

            return minlenwindow==INT_MAX?0:minlenwindow;
    }
};