class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int c=0,j=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
            c++;
            j=max(j,c);
            }
            else{
                c=0;
            }
        }
        return j;
    }
};