class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxa=INT_MIN;

        int i=0;
        int j=nums.size()-1;

        while(i<=j)
        {
            
                maxa=max(maxa,(j-i)*min(nums[i],nums[j]));
                
                if(nums[i]<=nums[j])
                {
                    i++;
                }
                else{
               
                    j--;

                }
                

        }

        return maxa;
    }
};