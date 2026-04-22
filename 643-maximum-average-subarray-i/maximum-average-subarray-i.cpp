class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {


        int i=0;
        int j=0;
        double sum=0.0;
        double maxavg=-20000;

        while(j<nums.size())
        {
            sum=sum+nums[j];

            // if(j-i+1<k)
            // {
            //     j++;
            // }
            if(j-i+1==k)
            {
                maxavg=max(maxavg,sum/k);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }

        return maxavg;   
    }
};