class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        int i=0;
        int j=i+1;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int k=j+1;
                int sum=nums[i] + nums[j];
                while(k<nums.size())
                {
                    if(sum>nums[k])
                    {
                        count++;
                    }
                    k++;
                }
            }
        }
            return count;
        }
    
};