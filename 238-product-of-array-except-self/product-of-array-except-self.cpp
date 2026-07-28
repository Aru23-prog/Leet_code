class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left,right,ans;
        int l=1,r=1;
        for(int i=0;i<nums.size();i++){
            left.push_back(l);
            l*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            right.push_back(r);
            r*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            ans.push_back(left[i]*right[nums.size()-1-i]);
        }
        return ans;
    }
};