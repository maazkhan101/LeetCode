class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());  // Pre-size the vector to match the size of candies

        int maxe = *max_element(candies.begin(), candies.end());  // Dereference to get the actual maximum value
        
        for (int i = 0; i < candies.size(); i++) {
            int temp = candies[i] + extraCandies;

            if (temp >= maxe) {  // Use >= to handle cases where temp equals maxe
                ans[i] = true;
            } else {
                ans[i] = false;
            }
        }

        return ans;
    }
};
