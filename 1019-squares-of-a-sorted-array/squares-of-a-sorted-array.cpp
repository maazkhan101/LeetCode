class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans;
        vector<int> n;
        vector<int> p;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0)
                n.push_back(nums[i] * nums[i]);
            else
                p.push_back(nums[i] * nums[i]);
        }

        sort(n.begin(), n.end());

        int i = 0;
        int j = 0;

        while(i < n.size() && j < p.size()) {
            if(n[i] <= p[j]) {
                ans.push_back(n[i]);
                i++;
            }
            else {
                ans.push_back(p[j]);
                j++;
            }
        }

        while(i < n.size()) {
            ans.push_back(n[i]);
            i++;
        }

        while(j < p.size()) {
            ans.push_back(p[j]);
            j++;
        }

        return ans;
    }
};