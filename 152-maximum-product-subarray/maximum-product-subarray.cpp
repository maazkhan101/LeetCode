class Solution {
public:
    int maxProduct(vector<int>& a) {

        int best_ending_min = a[0];

        int best_ending_max = a[0];
        int ans =a[0];

        int real_best_ending=a[0];


        for (int i=1 ;i <a.size(); i++)
        {
            int v1=a[i];
            int v2 = best_ending_min * a[i];
            int v3 =best_ending_max * a[i];

            best_ending_min= min(v1,min(v2,v3));

            best_ending_max=max(v1,max(v2,v3));

            real_best_ending = max(v1,max(v2,v3));

            ans=max(ans,real_best_ending);

        }

        return ans;
        
    }
};