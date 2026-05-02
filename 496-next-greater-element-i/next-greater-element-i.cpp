class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mp; // element → index in nums2
        
        // store index of each element in nums2
        for(int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = i;
        }

        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++) {
            
            int index = mp[nums1[i]]; // get index in nums2
            int nextGreater = -1;

            // scan right side
            for(int j = index + 1; j < nums2.size(); j++) {
                if(nums2[j] > nums1[i]) {
                    nextGreater = nums2[j];
                    break;
                }
            }

            ans.push_back(nextGreater);
        }

        return ans;
    }
};