class Solution {
public:

    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            vector<int> temp;
            while(nums[i]!=0){
                
                temp.push_back(nums[i]%10);
                nums[i]/=10;
            }
            
            ans.insert(ans.end(),temp.rbegin(),temp.rend());
            temp.clear();
        }
        return ans;
    }
};