class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxsum;
        double sum=0;

        for(int i=0;i<k;i++)
        {
            sum=sum+nums[i];
        }

        maxsum=sum;

        int startindex=0;
        int endindex=k;

        while(endindex<nums.size())
        {
            sum=sum-nums[startindex];
            startindex++;

            sum=sum+nums[endindex];
            endindex++;

            maxsum=max(maxsum,sum);
        }

        return (double)maxsum/k;
    }
};