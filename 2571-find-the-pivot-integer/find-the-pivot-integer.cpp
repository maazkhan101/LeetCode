class Solution {
public:
    int pivotInteger(int n) {
        // int pivot=0;

        
        for(int pivot=0;pivot<=n;pivot++)
        {

            
            int sum1=0;
            int sum2=0;
                for(int i=1;i<=pivot;i++)
                {
                    sum1=sum1+i;
                }   
                for(int i=pivot;i<=n;i++)
                {
                    sum2=sum2+i;
                }

                if(sum1==sum2)
                {
                    return pivot;
                }
               

        }

                return -1;
    }
};