class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n=nums.size();
        bool found = false;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]+nums[j]==target&&i!=j)
                {
                    v.push_back(i);
                    v.push_back(j);
                    found = true;
                    break;
                }
                
            }
            if(found==true)
                break;
            
        }
        return v;
    }
};