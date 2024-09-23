class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        

        int neg;
        int pos;
    int size=nums.size();
        pos=nums[size-1]*nums[size-2]*nums[size-3];
        neg=nums[0]*nums[1]*nums[size-1];
        return max(pos,neg);

    }
};