class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> m;
    vector<int> ans;

    // Step 1: Count frequency of each number
    for (int i = 0; i < nums.size(); i++) {
        m[nums[i]]++;
    }

    // Step 2: Copy map to a vector of pairs
    vector<pair<int, int>> v(m.begin(), m.end());

    // Step 3: Sort the vector in descending order of frequency (value)
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // Descending
    });

    // Step 4: Collect first k elements
    for (int i = 0; i < k; i++) {
        ans.push_back(v[i].first); // Only push the element (not frequency)
    }

    return ans;
    }
};