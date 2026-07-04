class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans(m+n,-1);
        int i=0;
        int j=0;
        int k=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                ans[k]=nums1[i];
                i++;
            }
            else{
                ans[k]=nums2[j];
                j++;
            }
            
            k++;
        }

       
            while(j<n){
                ans[k]=nums2[j];
                j++;
                k++;
            }
        
        
            while(i<m){
                ans[k]=nums1[i];
                i++;
                k++;
            }
            
        
        for(int t=0;t<ans.size();t++){
            nums1[t]=ans[t];
        }
    }
};