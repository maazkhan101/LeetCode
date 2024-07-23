class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int totalsum=0;
        for(int low=0; low<arr.size();low++)
        {
             int sum=0;
            for(int high=low;high<arr.size();high++ )
            {

                sum+=arr[high];
             int windowsize=high-low+1;
           
            if(windowsize%2!=0)
            {
                totalsum+=sum;
                
            }
            
        }
        }

        return totalsum;
    }
};