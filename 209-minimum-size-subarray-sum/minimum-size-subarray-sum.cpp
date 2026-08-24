class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i = 0;
        int j = 0;

        int ans = 0;
        int min_len = INT_MAX;

        int sum = 0;
        int length = 0;

        while (j < nums.size())
        {
            sum = sum + nums[j];

            if(sum>=target)
            {
                while(sum>=target)
                {
                    sum=sum-nums[i];
                    min_len=min(min_len,j-i+1);
                    i++;

                }
            }

            j++;
        }

        if (min_len == INT_MAX)
            return 0;

        return min_len;
    }
};
