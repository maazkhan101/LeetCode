class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);  // Initialize the result array with 1
        
        // Calculate left products
        int leftProduct = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = leftProduct;
            leftProduct *= nums[i];
        }
        
        // Calculate right products and multiply with corresponding left products
        int rightProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        
        return ans;
    }
};
