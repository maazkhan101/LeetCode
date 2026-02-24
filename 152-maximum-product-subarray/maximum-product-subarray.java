class Solution {
    public int maxProduct(int[] nums) {

        int max = nums[0];

        for(int i = 0; i < nums.length; i++) {

            int currp = 1;

            for(int j = i; j < nums.length; j++) {

                currp = currp * nums[j];
                max = Math.max(max, currp);

                if(currp == 0) break;  
            }
        }

        return max;
    }
}