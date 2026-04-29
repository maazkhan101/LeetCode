class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0;
        int i=0;
        int j=0;
        int sum=0;

        while(j<arr.size())
        {
            sum=sum+arr[j];
            int avg=0;
            if(j-i+1==k)
            {
                avg=sum/k;
                if(avg>=threshold)
                {
                    count++;
                }
                sum=sum-arr[i];
                i++;
            }
            j++;

            
        }
        return count;
    }
};