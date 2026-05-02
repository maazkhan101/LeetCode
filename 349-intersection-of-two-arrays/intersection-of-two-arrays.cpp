class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {


            set<int>s1;
            set<int>s2;

            for(int i=0;i<nums1.size();i++)
          {
                s1.insert(nums1[i]);
          }
          for(int i=0;i<nums2.size();i++)
          {
                s2.insert(nums2[i]);
          }    

          unordered_map<int,int>m;


          for(auto i:s1)
          {
            m[i]++;
          }  
          vector<int>ans;

          for(auto j:s2)
          {
            if(m.find(j)!=m.end())
            {
                ans.push_back(j);
            
            }
          }
          return ans;
    }
};