class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {

        sort(nums.begin(), nums.end());

        vector<int> ans;

        for(int i = 0; i < queries.size(); i++)
        {
            int sum = 0;
            int j = 0;

            while(j < nums.size() && sum + nums[j] <= queries[i])
            {
                sum = sum + nums[j];
                j++;
            }

            ans.push_back(j);
        }

        return ans;
    }
};