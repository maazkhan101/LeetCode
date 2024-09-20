class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

     unordered_map<int,int>m;
     vector<int>ans;
     for(int i=0;i<nums.size();i++)
     {
        m[nums[i]]++;
     }   

     for(int i=1;i<nums.size()+1;i++){
        if(m.find(i)==m.end())
        {
            ans.push_back(i);
        }
     }

     return ans;
    }
};