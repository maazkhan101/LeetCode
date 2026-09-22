class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int i=0;
        int j=0;
        int max_len=INT_MIN;
        int temp=k;
        while(j<nums.size())
        {
            
            if(nums[j]==0)
            {
                temp--;
            }
            if(temp<0)
            {
               
                if(nums[i]==0)
                {
                    temp++;
                }
                i++;
            }
             max_len=max(max_len,j-i+1);
            j++;
        }

        return max_len;
    }
};