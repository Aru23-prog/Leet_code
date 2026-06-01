//#include<climits>
class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=INT_MAX;
        vector<int> c(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                c[i]+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }
        for(int i=0;i<nums.size();i++){
        if(min>c[i]){
            min=c[i];
        }
        }
        return min;
    }
};