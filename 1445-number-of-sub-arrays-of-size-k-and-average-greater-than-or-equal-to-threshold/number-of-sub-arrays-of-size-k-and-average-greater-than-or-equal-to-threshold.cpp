class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int count=0;

        int start=0;
        int end=0;

        int sum=0;

        int n=nums.size();

        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
         
        }
         int avg=sum/k;
            if(avg>=threshold)
            {
                count++;
            }
        for(int j=1;j<n-k+1;j++)
        {
            int prevele=nums[j-1];
            int nextele=nums[j+k-1];
            sum=sum+nextele-prevele;
                int avg=sum/k;
            if(avg>=threshold)
            {
                count++;
            }
        }

        return count;
    }
};