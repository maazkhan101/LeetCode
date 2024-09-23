class Solution {
public:

    int leftsum(int i,vector<int>&nums)
    {   
        int leftsum=0;
        for(int j=0;j<i;j++)
        {
            leftsum+=nums[j];
        }

        return leftsum;
    }

    int rightsum(int i,vector<int>&nums)
    {   
        int rightsum=0;
        for(int j=i+1;j<nums.size();j++)
        {
            rightsum+=nums[j];
        }

        return rightsum;
    }
    int pivotIndex(vector<int>& nums) {
        
        int pivot=-1;

        for(int i=0;i<nums.size();i++)
        {
            int l=leftsum(i,nums);
            int r=rightsum(i,nums);

            if(l==r)
            {
                return i;
            }
        }

        return pivot;
    }
};