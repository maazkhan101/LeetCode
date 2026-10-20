class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        
        int best_ending=a[0];
        int maxi=a[0];
        int mini=a[0];

        for(int i=1;i<a.size();i++)
        {
            int v1= a[i];
            int v2= best_ending + a[i];
            best_ending = max (v1,v2);
            maxi=max(maxi,max(v1,v2));       
        }
        best_ending = a[0];
        for(int i=1;i<a.size();i++)
        {
            int v1=a[i];
            int v2=best_ending + a[i];

            best_ending = min (v1,v2);

            mini=min(mini,min(v1,v2));
        }
        int sum=0;
          for(int i=0;i<a.size();i++)
        {
            sum = sum + a[i];    
        }
                // If all elements are negative, don't use sum - mini
        if (maxi < 0)
            return maxi;

        int max_2 = sum- mini;

        int ans = max(max_2,maxi);

        return ans;
        

    }
};