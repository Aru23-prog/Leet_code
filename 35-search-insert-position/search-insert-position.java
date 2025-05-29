class Solution {
    public int searchInsert(int[] nums, int target) {
     
        int i,ans=nums.length;
        for(i=0;i<nums.length;i++){
            if(target==nums[i]){
                
                ans=i;
                break;
            }  
                else if(target<nums[i]){
                    ans=i;
                    break;
                }
                           
            }
            return ans;
        }
    }
