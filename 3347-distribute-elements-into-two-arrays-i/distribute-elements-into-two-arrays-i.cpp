class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        nums1.push_back(nums[0]);
        int i1=0;
        nums2.push_back(nums[1]);
        int i2=0;
        int i=2;
        while(i!=nums.size()){
            if(nums1[i1]>nums2[i2]){
                nums1.push_back(nums[i]);
                i++;
                i1++;
            }
            else if(nums1[i1]<nums2[i2]){
                nums2.push_back(nums[i]);
                i++;
                i2++;
            }
        }
        for(int j=0;j<nums2.size();j++){
            nums1.push_back(nums2[j]);
        }
        return nums1;
    }
};