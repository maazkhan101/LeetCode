class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        int c1=0;
        int c2=0;
        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    c1++;
                    break;
                }
            }
        }

        ans.push_back(c1);

        for(int i=0;i<nums2.size();i++)
        {
            for(int j=0;j<nums1.size();j++)
            {
                if(nums2[i]==nums1[j])
                {
                    c2++;
                    break;
                }
            }
        }

         ans.push_back(c2);

         return ans;

    }
};