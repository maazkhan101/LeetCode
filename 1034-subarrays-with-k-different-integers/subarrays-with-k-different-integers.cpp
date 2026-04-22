class Solution {
public:
    int solve(vector<int>& nums, int k) {

        int i=0;
        int j=0;
        int count=0;
        unordered_map<int,int>m;

        while(j<nums.size())
        {
            m[nums[j]]++;

            if(m.size()>k)
            {
                while(m.size()>k)
                {
                    m[nums[i]]--;
                    
                    if(m[nums[i]]==0)
                    {
                        m.erase(nums[i]);
                    }
                    i++;
                }
            
            }
            
                count+=j-i+1;
            
            j++;
        }   
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums,k)-solve(nums,k-1);
    }
};