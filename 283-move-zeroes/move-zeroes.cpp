class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++)
            if(nums[i]==0){
                s=nums[i];
                if(nums[j]!=0&& j>i){
                    nums[i]=nums[j];
                    nums[j]=s;
                    break;
                }
                
                
                
            }
        }
    }
};