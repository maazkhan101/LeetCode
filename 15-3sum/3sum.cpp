class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

                sort(nums.begin(),nums.end());

                set<vector<int>>s;

                vector<vector<int>>ans;


                int target=0;

                for(int i=0;i<nums.size();i++)
                {
                    int j=i+1;
                    int k=nums.size()-1;

                    while(j<k)
                    {
                        int sum=nums[i]+nums[j]+nums[k];
                        if(sum==target)
                        {
                            s.insert({nums[i],nums[j],nums[k]});
                        }
                        if(sum<target)
                        {
                            j++;
                        }
                        else{
                            k--;
                        }

                    }
                }  

                for(auto i:s)
                {
                    ans.push_back(i);
                } 

                return ans;

    }
};