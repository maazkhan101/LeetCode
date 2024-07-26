class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
            sort(nums.begin(),nums.end());
            int ans=nums[0]+nums[1]+nums[2];
            int mini=INT_MAX;;
            for(int i=0;i<nums.size();i++)
            {
                int j=i+1;
                int k=nums.size()-1;
                while(j<k)
                {

                    int sum=nums[i]+nums[j]+nums[k];
                    int temp=abs(target-sum);
                    if(temp<mini)
                    {
                        mini=temp;
                        ans=sum;
                    }
                    else  if(sum<target)
                    {
                        j++;
                    }
                    else  if(sum>target)
                    {
                        k--;
                    }
                    else{
                        return target;
                    }

                }
            }

            return ans;
        
    }
};