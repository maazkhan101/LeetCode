class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int index = 0;

        
        for (int i = 1; i <= n; ++i) {
            if (index >= target.size()) {
                break;
            }
            
            ans.push_back("Push");
            
            if (target[index] == i) {
                
                ++index;
            } else {
                
                ans.push_back("Pop");
            }
        }
        
        return ans;
    }
};
