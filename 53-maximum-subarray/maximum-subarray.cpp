class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int best_ending = a[0];

        int ans = a[0];

        for(int i=1; i<a.size();i++)
        {

            int v1= best_ending + a[i];
            int v2 = a[i];

            best_ending=max(v1,v2);
            ans=max(best_ending,ans);
        }
        return ans;
    }
};