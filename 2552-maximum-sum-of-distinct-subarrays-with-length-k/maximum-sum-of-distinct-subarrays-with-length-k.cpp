class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int i = 0, j = 0;
        unordered_map<int, int> m;
        long long sum = 0, max_sum = 0;

        while (j < nums.size()) {
            m[nums[j]]++;
            sum += nums[j];

            if (j - i + 1 < k) {
                j++;
            } 
            else if (j - i + 1 == k) {
                if (m.size() == k) {
                    max_sum = max(max_sum, sum);
                }

                m[nums[i]]--;
                if (m[nums[i]] == 0) {
                    m.erase(nums[i]);
                }
                sum -= nums[i];
                i++;
                j++;
            }
        }

        return max_sum;
    }
};
