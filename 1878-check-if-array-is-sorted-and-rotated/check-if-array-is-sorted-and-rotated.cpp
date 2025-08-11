class Solution {
public:
    bool check(vector<int>& nums) {
        int c=0;
        bool y=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                c++;
            }
            if(nums[nums.size()-1]<=nums[0]){
                y=true;
            }
        }
        if((c==1&&y==true)||c==0)
        {
            return true;
        }
        return false;
    }
};