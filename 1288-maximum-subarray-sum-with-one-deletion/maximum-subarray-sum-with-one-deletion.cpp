class Solution {
public:
    int maximumSum(vector<int>& a) {

         int one_delete=INT_MIN;

        int no_delete= a[0];
        int res=a[0];

        for(int i=1;i<a.size();i++)
        {
            
            int prev_no_delete= no_delete;
            int prev_one_delete = one_delete;
            
            no_delete=max(a[i], prev_no_delete + a[i]);
            int v1;
            if(prev_one_delete==INT_MIN)
            {
                v1= INT_MIN;
            }else
            {
                v1=prev_one_delete + a[i];
            
            }
            one_delete=max(v1,prev_no_delete);
            res=max(res,max(one_delete,no_delete));
        }
        return res;
        
    
        
    }
};