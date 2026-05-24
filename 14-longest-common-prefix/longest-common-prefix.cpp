class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
        return strs[0];
        sort(strs.begin(),strs.end());
        string s1=strs[0];
        string s2=strs[strs.size()-1];
        int i;
        for(i=0;i<strs[0].size();i++){
        if(s1[i]!=s2[i])
        return s1.substr(0,i);
        }
        if(i==s1.size()){
            return s1;
        }
        return "";
    }
};