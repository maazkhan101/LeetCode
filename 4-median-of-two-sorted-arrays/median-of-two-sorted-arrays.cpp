class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>ans;

       for(int i=0;i<nums1.size();i++)
       {
           ans.push_back(nums1[i]);

       }


       for(int j=0;j<nums2.size();j++)
       {
           ans.push_back(nums2[j]);
       }

       sort(ans.begin(),ans.end());

       int size=ans.size();
        double median;
       if(size%2!=0)
       {
           median=ans[(size-1)/2.0];
       }
       else{

           int l=ans[size/2];
           int k=ans[size/2-1];

           median=(l+k)/2.0;
       }

       return median;
    }
};