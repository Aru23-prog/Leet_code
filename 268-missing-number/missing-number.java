class Solution {
    public int missingNumber(int[] nums) {
        int n=nums.length;
        for(int i=0;i<n;i++){
            boolean found=false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){
                    found=true;
                    break;
                }
                
            }
            if(found==false){
                return i;
            }
        }
        return n;

    }
}