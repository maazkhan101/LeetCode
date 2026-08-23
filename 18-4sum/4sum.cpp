class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                int k = j + 1;
                int l = nums.size() - 1;

                while (k < l) {

                    long long sum = (long long)nums[i]
                                  + nums[j]
                                  + nums[k]
                                  + nums[l];

                    if (sum == target) {

                        ans.push_back({
                            nums[i],
                            nums[j],
                            nums[k],
                            nums[l]
                        });

                        k++;
                        l--;
                    }
                    else if (sum > target) {
                        l--;
                    }
                    else {
                        k++;
                    }
                }
            }
        }

        // Remove duplicates
        set<vector<int>> r;

        for (auto i : ans) {
            r.insert(i);
        }

        vector<vector<int>> r2;

        for (auto i : r) {
            r2.push_back(i);
        }

        return r2;
    }
};
