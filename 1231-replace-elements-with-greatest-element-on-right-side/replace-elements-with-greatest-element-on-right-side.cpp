class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans;
        
        ans.push_back(-1);
        int m=arr[arr.size()-1];
        for(int i=arr.size()-2;i>=0;i--){
            m=max(arr[i+1],m);
            ans.push_back(m);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};