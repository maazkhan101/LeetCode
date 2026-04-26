class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_set<int> s;

        for(int j = 0; j < nums.size(); j++)
        {
            if(s.count(nums[j])) return true;

            s.insert(nums[j]);

            if(s.size() > k)
            {
                s.erase(nums[j - k]);
            }
        }
        return false;
    }
};