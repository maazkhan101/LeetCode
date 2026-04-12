class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int>ans;

            int i=0;
            int k=numbers.size()-1;
            while(i<k)
            {
                int sum=numbers[k]+numbers[i];

                if(sum==target)
                {
                    ans.push_back(i+1);
                    ans.push_back(k+1);
                    i++;
                    k--;
                }
                if(sum<target)
                {
                    i++;
                }
                if(sum>target)
                {
                    k--;
                }
            }
            return ans;
        }   
    
};