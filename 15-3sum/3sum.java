class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        

        Arrays.sort(nums);

        HashSet<List<Integer>>s=new  HashSet<>();
        List<List<Integer>>ans=new ArrayList<>();

        for(int i=0;i<nums.length;i++)
        {


                int j=i+1;
                int k=nums.length-1;


                while(j<k)
                {

                    int sum=nums[i] + nums[j] + nums[k];

                        if(sum==0)
                         {
                            List<Integer>temp=new ArrayList<>();
                            temp.add(nums[i]);
                            temp.add(nums[j]);
                            temp.add(nums[k]);
                            
                            Collections.sort(temp);
                            s.add(temp);
                            j++;
                            k--;
                        }
                        if(sum<0)
                        {
                            j++;
                        }
                        if(sum>0)
                        {
                            k--;
                        }
                    }



                }    
        
        

        for(List<Integer>l : s)
        {
            ans.add(l);
        }

        return ans;
    }
}